#include "std_lib_facilities.h"

int main()
try {
	
	/*
	// 1. Cout << " Success!\n " ; 
	//cout kisbetű
	cout << " Success!\n " ;
		
	// 2. cout << "Success!\n;
	//Idézőjel a végén
	cout << " Success!\n";
	
	// 3. cout << " Success" << !\n "
	//Idézőjel a felkiáltó jel előtt.
	cout << " Success" << "!\n";

	// 4. cout << success << '\n';
	// idézőjel
	cout << "success" << '\n';

	// 5. string res = 7; vector<int> v(10); v[5] = res; cout << " Success!\n " ;
	// res típusa integer legyen
	int res = 7; 
	vector<int> v(10); 
	v[5] = res; 
	cout << " Success!\n ";

	
	// 6. vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << " Success!\n " ;
	// vektor nagysága helyett vektor elemének jelölése []-el
	vector<int> v(10); 
	v[5] = 7; 
	if (v[5]==7) 
		cout << " Success!\n";


	// 7. if (cond) cout << " Success!\n " ; else cout << " Fail!\n " ;
	// nem volt deklarálva és inicializálva a cond
	bool cond = true;
	if (cond) 
		cout << " Success!\n " ; 
	else cout << " Fail!\n " ;


	//8. bool c = false; if (c) cout << " Success!\n " ; else cout << " Fail!\n " ;
	// bool hamis értékre volt inicializálva, leggyakoribb szemantikai hiba
	bool c = true; 
	if (c) 
		cout << " Success!\n " ; 
	else cout << " Fail!\n " ;


	// 9. string s = " ape " ; boo c = " fool " <s; if (c) cout << " Success!\n " ;
	// logika művelet hamis értéket hozott
	
	string s = " ape "; 
	bool c = " fool " > s; 
	if (c) 
		cout << "Success!\n";


	// 10. string s = " ape " ; if (s== " fool " ) cout << " Success!\n " ;
	// logikai típust kellett beállítani
	string s = " ape " ; 
	if (s!= " fool " ) 
		cout << " Success!\n ";
	
	
	// 11. string s = " ape " ; if (s== " fool " ) cout < " Success!\n " ;
	// kiiratásnál egy kacsacsőr hiányzik
	string s = " ape " ; 
	if (s!= " fool " ) 
		cout << " Success!\n " ;
	

	// 12. string s = " ape " ; if (s+ " fool " ) cout < " Success!\n " ;
	// kiirításnál egy kacsacsőr hiányzik, illetve az operátor az elágazás magból
	string s = " ape " ; 
	if (s<" fool " ) 
		cout << " Success!\n ";

	// 13. vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << " Success!\n " ;
	// for ciklusban a 0 volt vizsgálva, valamint a for ciklus le volt zárva pontosvesszővel
	vector<char> v(5); 
	for (int i=0; i<v.size(); ++i)
		cout << "Success!\n" ;

	// 14. vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
	// le volt zárva a ciklus megint pontosvesszővel, valamint a ciklus többször futott végig a kisebb egyenlő operátor miatt
	vector<char> v(5); 
	for (int i=0; i<=v.size()-1; ++i)
		cout << "Success!\n" ;


	// 15. string s = " Success!\n " ; for (int i=0; i<6; ++i) cout << s[i];
	// az s változó hosszát kell vizsgálni a for ciklusban
	string s = " Success!\n "; 
	for (int i=0; i<s.length(); ++i) 
		cout << s[i];

	// 16. if (true) then cout << " Success!\n " ; else cout << " Fail!\n " ;
	// then nem kell, mivel egyből azt a feltételt teljesíti az if
	if (true) 
		cout << " Success!\n "; 
	else cout << " Fail!\n ";

	// 17. int x = 2000; char c = x; if (c==2000) cout << " Success!\n " ;
	// char típus nem képes tárolni ekkora adatot
	int x = 2000; 
	char c = x; 
	if (x==2000) 
		cout << " Success!\n " ;
		
	// 18. string s = " Success!\n " ; for (int i=0; i<10; ++i) cout << s[i];
	// a string hosszát kell vizsgálni 
	string s = " Success!\n " ; 
	for (int i=0; i<=s.length()-1; ++i) 
		cout << s[i];

	// 19. vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << " Success!\n " ;
	// vektor típusát megadtam, a for ciklus mögül kivettem a pontos vesszőt, plusz finomítottam az ellenőrzésen
	vector<int> v(5); 
	for (int i=0; i<=v.size()-1; ++i) 
		cout << "Success!\n";

	// 20. int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << " Success!\n " ;
	// az i változónkat növeljük, amíg a while ciklus igaz
	int i=0; 
	int j = 9; 
	while (i<10) 
		++i;
	if (j<i) 
		cout << "Success!\n";

	// 21. int x = 2; double d = 5/(x – 2); if (d==2*x+0.5) cout << " Success!\n " ;
	// double értékét megadtam
	int x = 2; 
	double d = 4.5; 
	if (d==2*x+0.5) 
		cout << " Success!\n " ;


	// 22. string<char> s = " Success!\n " ; for (int i=0; i<=10; ++i) cout << s[i];
	// sima szöveg típusú változóra van szükségünk
	string s = " Success!\n " ; 
	for (int i=0; i<=s.size()-1; ++i) 
		cout << s[i];


	// 23. int i=0; while (i<10) ++j; if (j<i) cout << " Success!\n " ;
	// j változó deklarálása és inicializálása illetve a while ciklus javítása
	int i=0;
	int j=0; 
	while (i<10) 
		++i; 
	if (j<i) 
		cout << "Success!\n";

	// 24. int x = 4; double d = 5/(x – 2); if (d=2*x+0.5) cout << " Success!\n " ;
	// d értékének megváltoztatása, úgy hogy a feltétel igaz legyen
	int x = 4; 
	double d = 8.5; 
	if (d=2*x+0.5) 
		cout << " Success!\n " ;

	// 25. cin << " Success!\n " ;
	// cin függvény beolvasásra való
	cout << " Success!\n ";

	*/








	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}