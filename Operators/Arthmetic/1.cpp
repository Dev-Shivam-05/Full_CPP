// Write a program to take two numbers as input and print their sum.

#include<iostream>
using namespace std;

int main(){
    
    int num1,num2,sum; //declaring Variables

    cout << "Enter A Number : ";
    cin >> num1;//taking input from user

    cout << "Enter Another Number : ";
    cin >> num2;//takinginput from user

    sum = num1 + num2;//assinging the sum of two number in 'sum variabler'

    cout << "The Sum Of " << num1 << " And " << num2 << " Is " << sum;//printing the value of sum

    return 0;
}