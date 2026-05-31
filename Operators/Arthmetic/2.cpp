// Take two numbers as input and print the result of subtracting the second number from the first.

#include<iostream>
using namespace std;

int main() {
    
    int num1,num2,sub;

    cout << "Enter A Number : ";
    cin >> num1; 

    cout << "Enter Another Number : ";
    cin >> num2;
    
    sub = num1 - num2;

    cout << "The Subtraction of " << num1 << " And " << num2 << " Is " << sub;
    return 0;
    
}