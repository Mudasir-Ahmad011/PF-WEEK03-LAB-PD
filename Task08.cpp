#include<iostream>
using namespace std;
main(){
float vegetable_pricePerkg;
float fruit_pricePerkg;
int total_kg_vegetables;
int total_kg_fruit;
float vegetables_cost;
float fruits_cost;
float rupee;
float total_cost;
float total_cost_aft_conv;
rupee = 1.94;
cout << "Enter Vegetable price per kilogram: ";
cin >> vegetable_pricePerkg;
cout << "Enter Fruit price per kilogram: ";
cin >> fruit_pricePerkg;
cout << "Total kilograms of vegetables: ";
cin >> total_kg_vegetables;
cout << "Total kilograms of fruits: ";
cin >> total_kg_fruit;

vegetables_cost = vegetable_pricePerkg * total_kg_vegetables;
fruits_cost = fruit_pricePerkg * total_kg_fruit;
total_cost =vegetables_cost + fruits_cost;
total_cost_aft_conv = total_cost/rupee;
cout << "Total cost in rupees is: "<< total_cost_aft_conv; 
}