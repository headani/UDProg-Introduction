#include "std_lib_facilities.h"



namespace X 
{
	int var = 0;
	void print()
	{
		cout << var << endl;
	}
}

namespace Y 
{
	int var = 0;
	void print()
	{
		cout << var << endl;
	}
}

namespace Z 
{
	int var = 0;
	void print()
	{
		cout << var << endl;
	}
}


int main()
{
	X::var = 7;
	X::print();
	// print X’s var
	using namespace Y;
	var = 9;
	// print Y’s var
	print();
	
	{
	
	using Z::var;
	using Z::print;
	var = 11;
	// print Z’s var
	print();
	
	}
	// print Y’s var
	print();
	// print X’s var
	X::print();
	
	
	


	return 0;
}




	