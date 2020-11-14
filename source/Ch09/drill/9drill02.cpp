#include "std_lib_facilities.h"

struct Date {
    int y, m, d;
    Date(int yy, int mm, int dd);
    void add_day(int n);
};

Date::Date(int yy, int mm, int dd)
{
    if (dd < 1 || dd > 31) error("init_day: Invalid day");
    if (mm < 1 || mm > 12) error("init_day: Invalid month");

    y = yy;
    m = mm;
    d = dd;
}

void Date::add_day(int n)
{
    d += n;
    
    if (d > 31) { ++m; d -= 31; }
    if (d < 1)  { --m; d += 31; }
    if (m > 12) { ++y; m -= 12; }
    if (m < 1)  { --y; m += 12; }
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y
              << ',' << d.m
              << ',' << d.d << ')';
}

int main()
try
{
    Date today{1978, 6, 25};

    Date tomorrow{today};
    tomorrow.add_day(1);

    cout << "Mai nap: " << today << '\n';
    cout << "Holnapi nap: " << tomorrow << '\n';

    Date test{2010, 12, 31};

    test.add_day(6);   // 11 január 6
    cout << "2011. január 5: " << test << '\n';
    test.add_day(-6);  // 10 december 31
    cout << "2010. december 31: " << test << '\n';

    test = Date{2010, 2, 5};
    test.add_day(-7);   // 2010 January 29th 
    cout << "2010. január 29: " << test << '\n';
    test.add_day(7);    // 2010 February 5th again 
    cout << "2010. február 5: " << test << '\n';

   
    Date today_e{2004, 13, -5}; // elrontott dátum

    return 0;
}
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
catch(...)
{
    cerr << "Something went wrong\n";
    return 2;
}