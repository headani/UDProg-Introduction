#include "std_lib_facilities.h"

int main()
{
	// 1-4 feladat
	int birth_year = 2001;
	
	cout << birth_year << "\t(decimal)\n"
		<< hex << birth_year << "\t(hexadecimal)\n"
		<< oct << birth_year << "\t(octal)\n";

	// 5-7 feladat
	cout << noshowbase << dec << endl;
	int age = 19;
	cout << age << "\t(decimal)\n"
		<< hex << age << "\t(hexadecimal)\n"
		<< oct << age << "\t(octal)\n\n";


	// 8 feladat
	int a,b,c,d;
	cout << "Type 4 integer" << endl;
	// első számot hexadecimálisként olvassuk, másodikat octalként, harmadik negyedik pedig sima decimális
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << endl << endl;
	// kimenetet visszaállítjuk decimálisra
	cout<<noshowbase<<dec;


	// 9 feladat
	float number = 1234567.89;

	cout << defaultfloat << number << "\t(defaultfloat)\n"
		<< fixed << number << "\t(fixed)\n"
		<< scientific << number << "\t(scientific)\n" << endl;



	// 10 feladat
	// táblázat fejléc
	cout<<'|'<<setw(11)<<"Firstname"
		<<'|'<<setw(10)<<"Lastname"
		<<'|'<<setw(12)<<"Phone number"
		<<'|'<<setw(20)<<"e-mail"<<"|\n";
	// táblázat tartalom
	cout<<'|'<<setw(11)<<"Daniel"
		<<'|'<<setw(10)<<"Papp"
		<<'|'<<setw(12)<<"06301234567"
		<<'|'<<setw(20)<<"pappd@yahoo.com"<<"|\n";
	cout<<'|'<<setw(11)<<"Balazs"
		<<'|'<<setw(10)<<"Dobos"
		<<'|'<<setw(12)<<"06708945631"
		<<'|'<<setw(20)<<"balazs@telekom.hu"<<"|\n";
	cout<<'|'<<setw(11)<<"Szabolcs"
		<<'|'<<setw(10)<<"Varga"
		<<'|'<<setw(12)<<"0680654321"
		<<'|'<<setw(20)<<"szaboca@milliomos.hu"<<"|\n";
	cout<<'|'<<setw(11)<<"Aliz"
		<<'|'<<setw(10)<<"Kereki"
		<<'|'<<setw(12)<<"06208547231"
		<<'|'<<setw(20)<<"balazs@telekom.hu"<<"|\n";
	cout<<'|'<<setw(11)<<"Julia"
		<<'|'<<setw(10)<<"Bohos"
		<<'|'<<setw(12)<<"06312345789"
		<<'|'<<setw(20)<<"bohosjuci@mail.eu"<<"|\n";
	cout<<'|'<<setw(11)<<"Reka"
		<<'|'<<setw(10)<<"Repai"
		<<'|'<<setw(12)<<"0680874565"
		<<'|'<<setw(20)<<"duplar@nav.hu"<<"|\n";


	return 0;
}