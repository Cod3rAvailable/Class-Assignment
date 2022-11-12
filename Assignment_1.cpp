#include <iostream>
using namespace std; 
int main()

{
string myName, myLastName, fullName, meal, movie; 


cout << "Your First Name:";
cin >> myName;


cout << "Your Last Name:";
cin >> myLastName;


fullName= myName + myLastName;

cout << "Your Full Name:" <<fullName <<endl;


cout <<"Your Favourite Meal:";
cin >> meal;


cout <<"Your Favourite Movie:";
cin >> movie;



cout << "Your First Name is: " <<myName <<endl;
cout << "Your Last Name is:" <<myLastName <<endl;
cout << "Your Full Name is:" <<fullName <<endl;
cout << "Your Favorite Meal is:" <<meal <<endl;
cout <<"Your Favorite Movie is:" <<movie <<endl;

}