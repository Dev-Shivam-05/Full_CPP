// Write a program that checks if a number is even AND divisible by 5.

#include<iostream>
using namespace std;

int main() {
    
    int num_1; // declaring variable
    
    cout << "Enter A Number : ";
    cin >> num_1; // taking input from user

    if (num_1 % 2 == 0 && num_1 % 5 == 0) { // checking condition
        cout << "The Inputed Number " << num_1 << " Is Even And Also Divisible By 5."; // printing if condition gets true
    }
    else if (num_1 % 2 == 0 && num_1 % 5 != 0) { // checking condition
        cout << "The Inputed Number " << num_1 << " Is Even But Not Divisible By 5."; // printing if condition gets true
    }
    else if (num_1 % 2 != 0 && num_1 % 5 == 0) { // checking condition
        cout << "The Inputed NUmber " << num_1 << " Is Odd And Also Divisible By 5."; // printing if condition gets true
    }
    else if (num_1 % 2 != 0 && num_1 % 5 != 0) { // checking condition
        cout << "The Inputed NUmber " << num_1 << " Is Odd And Not Divisible By 5."; // printing if condition gets true
    }
    else {
        cout << "Sorry Wrong Input"; // printing none condition gets true
    }

    return 0;
}