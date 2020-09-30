#include "std_lib_facilities.h"

int main()
{

cout << "Please enter your first name (followed by 'enter'):\n";
string first_name;
cin >> first_name;

cout << "Hello, " << first_name << "\n";
cout << "Enter the name of the person you want to write to\n";
cin >> first_name;

cout << "Enter your friend age\n";
int age;
cin >> age;


if(age<0 | age>110)
simple_error("You're kidding");


cout << "Enter the name of your another friend\n";
string friend_name;
cin >> friend_name;



char friend_sex =0;
cout <<"enter an 'm' if the friend is male and an 'f' if the friend is female\n";
cin >> friend_sex;


while (friend_sex != 'm' && friend_sex != 'f')
{
	cout << "Please type 'm' or 'f'\n";
	cin >> friend_sex;
}


// Levél

cout << "\n\n\nDear, "  << first_name << endl;
cout << "How are you?\n";

cout << "Have you seen " << friend_name << " lately?\n";


if(friend_sex=='m')
{
cout << "If you see " << friend_name << " please ask him to call me \n";
}
else
{
if(friend_sex=='f')
{
cout << "If you see " << friend_name << " please ask her to call me \n";
}
else
{
cout << "You didnt type valid input\n";
}
}




cout << "I hear you just had a birthday and you are " << age << " years old\n";

if(age<12)
cout << "Next year you will be " << age+1 << endl;
else if(age==17)
cout << "Next year you will be able to vote\n";
else if(age>70)
cout << "I hope you are enjoying retirement\n";


cout << "Yours sincerely,\n\n";
cout << "Dani\n";

return 0;

}
