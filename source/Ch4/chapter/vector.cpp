#include "std_lib_facilities.h"


int main()
{


vector<int> v;



for (int bekert; cin>>bekert;)
{
	
	v.push_back(bekert);
}

for (int i = 0; i < v.size(); ++i)
{
	cout << v[i];
}


return 0;
}