// Write a program to multiply two numbers entered by the user and display the result.

#include<iostream>
using namespace std;

int main() {
    int num1,num2,product; //declaring variables

    cout << "Enter A Number : ";
    cin >> num1; // taking input from user

    cout << "Enter Another Number : ";
    cin >> num2; // taking input fro user

    product = num1 * num2; //puting the Product of 'num1' And 'num2' in 'product'

    cout << "The Product Of " << num1 << " And " << num2 << " Is " << product; //printing results

    return 0;
}