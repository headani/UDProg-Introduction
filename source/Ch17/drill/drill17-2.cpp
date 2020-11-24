#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for(int i = 0; i < n; ++i)
		os << a[i] << " ";

	cout << endl;
	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
	for(int i=0;i<v.size();++i)
		os << v[i] << " ";
	cout << endl;
	return os;
}


int main()
{
	int x = 7;
	int* p1 = &x;

	cout << "p1 value of: " << p1 << " points to  " << *p1 << endl; 

	int* p2 = new int[7] {1, 2, 4, 8, 16, 32, 64};
	cout << "p2 points to: " << p2 << endl;
	cout << "p2 values: " << endl;
	print_array(cout,p2,7);


	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << "p1 value: " << p1 << " and points to: " << *p1 << endl; 
	cout << "p2 value: " << p2 << " and points to: " << *p2 << endl; 

	delete[] p2;




	p1 = new int[10] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	p2 = new int[10];
	for(int i = 0; i < 10; ++i)
		p2[i]=p1[i];

	print_array(cout,p2,10);

	delete[] p2;
	delete[] p1;


	
	vector<int> v1 {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
	vector<int> v2(10);
	v2=v1;

	//vektor
	print_vector(cout,v2);



	return 0;
}