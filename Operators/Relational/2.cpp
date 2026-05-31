// Given three numbers, find the median (middle value) using relational operators.

#include<iostream>
using namespace std;

int main() {
    
    double num1,num2,num3; //declaring variables

    cout << "Enter First Number : ";
    cin >> num1; // taking input from user
    
    cout << "Enter Second Number : ";
    cin >> num2; // taking input from user

    cout << "Enter Third Number : ";
    cin >> num3; // taking input from user

    if (num1 > num2 && num1 < num3) { // checking condition
        cout << num1 ; // if condition gets true printing the value
    }
    else if (num1 < num2 && num1 > num3) { // checking condition
        cout << num1 ; // if condition gets true printing the value
    }
    else if (num2 > num3 && num2 < num1) { // checking condition
        cout << num2 ; // if condition gets true printing the value
    }
    else if (num2 < num3 && num2 > num1) { // checking condition
        cout << num2 ; // if condition gets true printing the value
    }
    else if (num3 > num2 && num3 < num1) { // checking condition
        cout << num3 ; // if condition gets true printing the value
    }
    else if (num3 < num2 && num3 > num1) { // checking condition
        cout << num3 ; // if condition gets true printing the value
    }
    else {
        cout << "None" ;
    }
    return 0;
}
