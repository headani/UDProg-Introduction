#include "std_lib_facilities.h"

namespace UDChrono {

enum class Month {
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month operator+(const Month& m, int n)
{
    int r = int(m) + n;
    r %= int(Month::dec);

    if (r == 0) return Month::dec;
    return Month(r);
}

Month operator-(const Month& m, int n) { return (m+(-n)); }
Month& operator+=(Month& m, int n) { m = m + n; return m; }

bool operator<(const Month& m, int n) { return int(m) < n; }
bool operator>(const Month& m, int n) { return int(m) > n; }

class Date {
public:
    class Invalid {};
    Date(int yy, Month mm, int dd);

    Month month() const { return m; }
    int day() const { return d; }
    int year() const { return y; }

    void add_day(int n);
    void add_month(int n);        
    void add_year(int n);
private:
    int y;
    Month m;
    int d;
    bool is_valid();
};

Date::Date(int yy, Month mm, int dd)
        :y{yy}, m{mm}, d{dd}
{
    if (!is_valid()) throw Invalid{};
}

bool Date::is_valid()
{
    if (d < 1 || d > 31) return false;
    if (m < Month::jan || m > Month::dec) return false;
    return true;
}

void Date::add_day(int n)
{
   
    int n_d = n % 31;         
    int n_m = (n / 31) % 12;  
    int n_y = n / (31*12);

    d += n_d;
    if (d > 31) { ++n_m; d -= 31; }
    if (d < 1)  { --n_m; d += 31; }
 
    
    if (Month::dec < (int(m)+n_m)) ++n_y;
    if (Month::jan > (int(m)+n_m)) --n_y;
    m += n_m;
    y += n_y;
}

void Date::add_month(int n)
{
    int n_m = n % 12;
    int n_y = n / 12; 

    
    if (Month::dec < (int(m)+n_m)) ++n_y;
    if (Month::jan > (int(m)+n_m)) --n_y;
    m += n_m;
    y += n_y;
}

void Date::add_year(int n)
{
    y += n;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year()
              << ',' << int(d.month())
              << ',' << d.day() << ')';
}

}; // Chrono vége

int main()
try
{
    using UDChrono::Date;
    using UDChrono::Month;

    Date today{1978, Month::jun, 25};

    Date tomorrow{today};
    tomorrow.add_day(1);

    cout << "Mai nap: " << today << '\n';
    cout << "Holnapi nap: " << tomorrow << '\n';

    Date test{2010, Month::dec, 31};

    test.add_day(6);   // 11 január 6
    cout << "2011. január 6: " << test << '\n';
    test.add_day(-6);  // 10 december 31
    cout << "2010. december 31: " << test << '\n';

    test = Date{2010,Month::feb, 5};
    test.add_day(-7);   // 10 január 29 
    cout << "2010. január 29: " << test << '\n';
    test.add_day(7);    // 10 február 5
    cout << "2010 február 5: " << test << '\n';

    test.add_month(25);
    cout << "2012. március 5: " << test << '\n';
    test.add_month(-25);
    test.add_year(8);
    cout << "2018. február 5: " << test << '\n';
    test.add_year(-8);
    cout << "2010. február 5: " << test << '\n';


    Date today_e{2004, Month::dec, -5}; //elrontott dátum

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(UDChrono::Date::Invalid)
{
    cerr << "Invalid date!\n";
    return 2;
}
catch(...)
{
    cerr << "Something went wrong\n";
    return 3;
}