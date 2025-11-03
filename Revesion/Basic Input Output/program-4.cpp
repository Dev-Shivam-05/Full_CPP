// Write a program to convert Celsius to Fahrenheit.

#include<iostream>
using namespace std;

int main() {
    int celsius; 

    cout << "Enter The Celsius To Convert Into fahrenheit :- ";
    cin >> celsius;

    const int fahrenheit = 2 * (celsius * (9/5)) + 32;
    
    cout << "Fahrenheit Of " << celsius << "deg Celsius Is:- " << fahrenheit << endl;
    
    return 0;
}