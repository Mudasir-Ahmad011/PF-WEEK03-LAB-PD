#include<iostream>
using namespace std;
main(){
int user_input;
int mod1;
int mod2;
int mod3;
int mod4;
int div1,div2,div3,div4;
int sum;


cout << "Enter the 4-digit number: ";
cin >> user_input;
mod1 = user_input % 10;
div1 = user_input/10;
mod2 = div1 % 10;
div2 = div1/10;
mod3 = div2 % 10;
div3 = div2/10;
mod4 = div3;
sum = mod1 + mod2 + mod3 + mod4;
cout << "The sum of 4-digit number is: "<< sum;
}