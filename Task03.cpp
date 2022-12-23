#include<iostream>
using namespace std;
main(){
int initial_velocity;
int acceleration;
int time;
int final_velocity;

cout << "Enter initial velocity: ";
cin >> initial_velocity;
cout << "Enter acceleration: ";
cin >> acceleration;
cout << "Enter time: ";
cin >> time;
final_velocity = (acceleration * time)+initial_velocity;
cout << "Final velocity: "<<final_velocity;
}