// Write a program to check if the customer gets a discount.

#include<iostream>
using namespace std;

int main() {
    
    int items; //declaring variables
    long int total_bill; //declaring variables

    cout << "----Discount Checker----";

    cout << "How MAny Item You Buyed : ";
    cin >> items; // taking input from users

    cout << "What Is Your Total Bill : ";
    cin >> total_bill; // taking input from users

    if (items > 5 || total_bill > 5000) { // checking condition
        cout << "Congrtulatios!, You Have GOt 10% Discount! from the total Bill."; //printing if condition gets true
    }
    else {
        cout << "Sorry You Don't Acived Any Discount."; //printing if condition gets false 
    }
    
    return 0;
}