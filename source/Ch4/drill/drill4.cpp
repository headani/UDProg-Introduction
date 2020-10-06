#include "std_lib_facilities.h"

int main()
{




/*
//5. feladatig

double x=0;
double y=0;


while(cin >> x >> y)
{

	if(x<y)
	{
		cout << x << ' ' << y << endl;
		if(y-x<0.1)
		cout << "The numbers are almost equal";	
	}
	else if(y<x)
	{
		cout << y << ' ' << x << endl;
		if(x-y<0.1)
		cout << "The numbers are almost equal";	
	}
	else 
		cout << "The numbers are equal";


}
*/
/*
double round=0;
double z=0;
double min=99999;
double max=0;

while(cin >> z)
{

if(round==0)
{
	cout << "Z: " << z << endl;
	min=z;
	max=z;
	cout << "This is the largest and the smallest number, because its the first number that you wrote\n";
}
else
{
	if(z<min)
	{
		min=z;
		cout << "the smallest so far: " << min << endl;
	}
	else if(z>max)
	{
		max=z;
		cout << "the largest so far: " << max << endl;
	}
}







round++;
}
*/

double d=0;
char unit;
double inch_to_m=0.254;
double feet_to_m=0.3048;
double cm_to_m=0.01;

double sum=0;


vector<double> v;


cout << "Type a number and unit (c,i,f,m)\n";
while(cin >> d >> unit)
{


switch(unit)
{
	
	case 'i': 
	cout << d << " inch = " << inch_to_m*d << " m\n"; 
	v.push_back(inch_to_m*d);
	sum+=inch_to_m*d;
	break;
	case 'c': 
	cout << d << " cm = " << cm_to_m*d << " m\n"; 
	v.push_back(cm_to_m*d);
	sum+=cm_to_m*d;
	break;
	case 'f': 
	cout << d << " feet = " << feet_to_m*d << " m\n"; 
	v.push_back(feet_to_m*d);
	sum+=feet_to_m*d;
	break;
	case 'm': 
	cout << d << " m = " << d << " m\n"; 
	sum+=d;
	v.push_back(d);
	break;
	default: cout << "Not valid unit\n"; break;

}

}

for (int i = 0; i < v.size(); ++i)
{
	cout << v[i] << " m" << endl;
}

cout << "A beírt elemek összege: " << sum << endl;
sort(v);
cout << "Az első beírt elem: " << v[0] <<endl;
cout << "Az utolsó elem: "<< v[v.size()-1] << endl;

cout << "Elemek száma: " << v.size();

return 0;
}