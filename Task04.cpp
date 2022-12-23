#include<iostream>
using namespace std;
main(){
string name;
int sub_1;
int sub_2;
int sub_3;
int sub_4;
int sub_5;
int total_marks_obtained;
float percentage;

cout << "Your Name: ";
cin >> name;
cout << "Enter subject 01 marks: ";
cin >> sub_1;
cout << "Enter subject 02 marks: ";
cin >> sub_2;
cout << "Enter subject 03 marks: ";
cin >> sub_3;
cout << "Enter subject 04 marks: ";
cin >> sub_4;
cout << "Enter subject 05 marks: ";
cin >> sub_5;

total_marks_obtained = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
percentage = (total_marks_obtained * 100)/500;
cout << "Percentage: "<< percentage<<"%";

}