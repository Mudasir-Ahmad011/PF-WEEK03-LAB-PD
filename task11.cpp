#include<iostream>
using namespace std;
main(){
int user_input;
int sum;

cout << "Enter the number: ";
cin >> user_input;

sum = user_input;
cout << "Enter the number: ";
cin >> user_input;

sum = user_input+sum;
cout << "Enter the number: ";
cin >> user_input;

sum = user_input+sum;
cout << "Enter the number: ";
cin >> user_input;

sum = user_input+sum;
cout << "Enter the number: ";
cin >> user_input;

sum = user_input+sum;

cout << "sum: "<<sum;
}