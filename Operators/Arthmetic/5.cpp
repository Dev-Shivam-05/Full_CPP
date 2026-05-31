// Write a program that takes two numbers and prints the remainder when the first number is divided by the second.

#include<iostream>
using namespace std;

int main() {
    
    int num1,num2,remainder; // Declaring Variables

    cout << "Enter a Number : ";
    cin >> num1; // TAking Input From USer

    cout << "Enter Another Number : ";
    cin >> num2; // TAking Input From USer

    remainder = num1 % num2; // Puting The result in reminder of num1 And num2. Using (%) Oprator for remainder 

    cout << "The Reminder Of " << num1 << " And " << num2 << " Is " << reminder; // Printing Results

    return 0;
}