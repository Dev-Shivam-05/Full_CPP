// Write a program to check if a given year is a leap year using logical operators.

#include<iostream>
using namespace std;

int main() {
    
    int year; // declaring variable

    cout << "Enter Your Birth Year : ";
    cin >> year; // taking input from user

    if (year % 4 == 0) { // checking conndition
        cout << "You Were Born In A Leap Year"; // printing  if condition gets true
    }
    else {
        cout << "It Is Not A Leap Year" ; // printing if condition gets false
    }
    
    return 0;
}