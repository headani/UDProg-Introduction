#include "my.h"
#include <iostream>
#include "std_lib_facilities.h"

int foo;

int main()
{
	foo = 7;
	print_foo();
	print(99);

	
/* 
// windows esetén
	char ch;
	cin >> ch;
*/

	int x=7;
	int y = 9;
	print(x);
	print(y);
	//cout << x << " " << y << endl;
	swap_r(x,y);
	cout << "Swap után:\n";
	print(x);
	print(y);
	swap_v(7,9);

	/*
	//kontanst nem lehet megváltoztatni
	const int cx = 7;
	const int cy = 9;
	swap_cr(cx,cy);
	//swap_v(7.7,9.9);
	
	
	// double típusú értékekre nincs függvényünk
	double dx = 7.7;
	double dy = 9.9;
	swap_??(dx,dy);
	swap_v(7.7,9.9);
	
	*/

	return 0;
}


