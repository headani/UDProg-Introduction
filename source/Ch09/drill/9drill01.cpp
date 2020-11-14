// 9.drill.01.cpp
//
//  This drill simply involves getting the sequence of versions of Date to
//  work. For each version define a Date called today initialized to June 25,
//  1978. Then, define a Date called tomorrow and give it a value by copying
//  today into it and increasing its day by one using add_day(). Finally,
//  output today and tomorrow using a << defined as in §9.8.
//  Your check for a valid date may be very simple. Feel free to ignore leap
//  years. However, don't accept a month that is not in the [1,12] range or
//  day of the month that is not in the [1,31] range. Test each version with at
//  least one invalid date (e.g., 2004, 13, -5).
//
//  The version from §9.4.1
//
// COMMENTS
//
//  I will not do this by separating Date class, Month enumerator or helper
//  functions in their own header file. Just for the shake of simplicity.
//
//  add_day() will be implemented supposing all months have 31 days. It will
//  complicate it to do better until best tools, as enums, are introduced.

#include "std_lib_facilities.h"

struct Date {
    int y;      // year
    int m;      // month in year
    int d;      // day of month
};

void init_day(Date& dd, int y, int m, int d)
{
    if (d < 1 || d > 31) error("init_day: Invalid day");
    if (m < 1 || m > 12) error("init_day: Invalid month");

    dd.y = y;       
    dd.m = m;
    dd.d = d;
}

void add_day(Date& dd, int n)
{
    dd.d += n;
     
    if (dd.d > 31) { ++dd.m; dd.d -= 31; }
    if (dd.d < 1)  { --dd.m; dd.d += 31; }
    if (dd.m > 12) { ++dd.y; dd.m -= 12; }
    if (dd.m < 1)  { --dd.y; dd.m += 12; }
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
    Date today;
    init_day(today, 1978, 6, 25);

    Date tomorrow{today};
    add_day(tomorrow, 1);

    cout << "Mai nap: " << today << '\n';
    cout << "Holnapi nap: " << tomorrow << '\n';

    Date test;

    init_day(test, 2010, 12, 31);
    add_day(test, 6);   //11 január 6
    cout << "2011. január 6: " << test << '\n';
    add_day(test, -6);  // 10 dec 31
    cout << "2010. december 31: " << test << '\n';

    init_day(test, 2010, 2, 5);
    add_day(test, -7);   //január 29
    cout << "2010. január 29: " << test << '\n';
    add_day(test, 7);  // febr 5
    cout << "2010. február 5: " << test << '\n';

    
    Date today_e;
    init_day(today_e, 2004, 13, -5); // elrontott dátum

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