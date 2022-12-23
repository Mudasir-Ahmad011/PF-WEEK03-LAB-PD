#include<iostream>
using namespace std;
main(){
int fertilizer_bag_size;
int cost_per_bag;
int area_in_squarefeet;
int fertilizer_per_pound_cost;
int area_per_sqaurefeet_cost;

cout << "Enter Bag size in Pounds: ";
cin >> fertilizer_bag_size;
cout << "Enter cost of bag: ";
cin >> cost_per_bag;
cout << "Enter area covered by each bag in square feet: ";
cin >> area_in_squarefeet;
fertilizer_per_pound_cost= cost_per_bag/fertilizer_bag_size;
area_per_sqaurefeet_cost = cost_per_bag/area_in_squarefeet;
cout <<"Cost of the fertilizerper pound: "<< fertilizer_per_pound_cost << endl;
cout <<"Cost of fertilizer the area per square feet: "<< area_per_sqaurefeet_cost << endl;
}