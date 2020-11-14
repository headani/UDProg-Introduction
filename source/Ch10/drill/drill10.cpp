#include "std_lib_facilities.h"

struct Point
{
	int x,y;
};

vector<Point> original_points;
vector<Point> processed_points;

void get_points()
{
	int x ,y;
	
	while (cin >> x >> y )
	{
		original_points.push_back(Point{x,y});

		if(original_points.size()==7) break;
	}
}

void write_points()
{
	string name = "mydata.txt";

	ofstream ost {name};

	if (!ost) error ("can't open output file ", name);


	for (int i=0;i<original_points.size();++i)
	{
		ost << original_points[i].x << ' ' << original_points[i].y << endl;
	}

	
	ost.close();
}

void read_points()
{
	string name = "mydata.txt";
	int x,y;
	ifstream ist {name};

	if (!ist) error ("can't open input file ", name);

	while (ist >> x >> y)
	{
		processed_points.push_back(Point{x,y});
	}
}

void compare()
{

	
	for (int i=0; i<original_points.size(); i++)
	{
		if ((original_points[i].x!=processed_points[i].x) || (original_points[i].y!=processed_points[i].y))
			error("Something's wrong");
		
	}
	
}


int main()
try{

	cout << "Please type 7 x,y pair integer\n";
	get_points();

	write_points();
	read_points();

	// eredeti vektor
	cout << "Original points: \n";
	for (int i=0;i<original_points.size();++i)
	{
		cout << original_points[i].x << ' ' << original_points[i].y << endl;
	}
	// beolvasott vektor
	cout << "Processed points: \n";
	for (int i=0;i<processed_points.size();++i)
	{
		cout << processed_points[i].x << ' ' << processed_points[i].y << endl;
	}

	compare();

	return 0;

} catch (exception& e) {
	cout<<e.what()<<endl;
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}