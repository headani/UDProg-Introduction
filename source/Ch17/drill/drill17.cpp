#include "std_lib_facilities.h"


ostream& print_array10(ostream& os, int* a)
{


	for(int i = 0; i < 10; ++i)
		os << a[i] << endl;


	return os;
	
}

ostream& print_array(ostream& os, int* a, int size)
{
	for(int i = 0; i < size; ++i)
		os << a[i] << endl;


	return os;
}

ostream& print_vector(ostream& os, vector<int>& v)
{
	for(int i=0;i<v.size();++i)
		os << v[i] << endl;
	return os;
}


int main()
try
{

	//1-4. feladat
 	int* values = new int[10];
/*
 	for (int i = 0; i < 10; ++i)
 	{
 		cout << values[i] << endl;
 		
 	}
*/
 	print_array10(cout, values);

 	delete[] values;

 	//5. feladat
 	int* values10 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	print_array10(cout, values10);

	delete[] values10;

	//6. feladat
 	int* values11 = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	
	print_array(cout, values11,11);

	delete[] values11;


	int* values20 = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 110, 111, 112, 113, 114, 115, 116, 117, 118};
	
	print_array(cout, values20, 20);

	delete[] values20;



	// vektor


	
	// 10 elemu
	cout << "10 elemu vektor" << endl;
	vector<int> vector10(10);
	int alap=100;
	for(int i=0; i<vector10.size();++i)
	{
		vector10[i]=(alap++);
	}
	print_vector(cout, vector10);




	cout << "11 elemu vektor" << endl;
	//11 elemu
	vector<int> vector11(11);
	alap=100;
	for(int i=0; i<vector11.size();++i)
	{
		vector11[i]=(alap++);
	}
	print_vector(cout, vector11);




	cout << "20 elemu vektor" << endl;
	// 20 elemu
	vector<int> vector20(20);
	alap=100;
	for(int i=0; i<vector20.size();++i)
	{
		vector20[i]=(alap++);
	}
	print_vector(cout, vector20);




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