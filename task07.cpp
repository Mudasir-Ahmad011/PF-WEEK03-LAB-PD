#include<iostream>
using namespace std;
main(){
string movie;
int adult_tick_price;
int child_tick_price;
int no_adult_tick_sold;
int no_child_tick_sold;
int percentage;
int total_amount;
int amount_donate;
int amount_aft_donate;

cout << "Enter Movie Name: ";
cin >> movie;
cout << "Enter adult ticket price: ";
cin >> adult_tick_price;
cout << "Enter child ticket price: ";
cin >> child_tick_price;
cout << "Enter number of adult ticket sold: ";
cin >> no_adult_tick_sold;
cout << "Enter number of child ticket sold: ";
cin >> no_child_tick_sold;
cout << "Enter percentage to donate: ";
cin >> percentage;

total_amount = (no_adult_tick_sold*adult_tick_price) + (no_child_tick_sold*child_tick_price);
cout << "Total Amount generated: "<< total_amount<<endl;
amount_donate = (total_amount*percentage)/100;
amount_aft_donate = total_amount - amount_donate;
cout << "Amount after donation: "<< amount_aft_donate<<endl;
}