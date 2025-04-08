// Print "Even" Or "Odd" Using Ternary Operator

#include<iostream>
using namespace std;

int main() {

    int num_1;
    
    cout << "Enter A Number : ";
    cin >> num_1;

    (num_1 % 2 == 0)
        ? cout << num_1 << " Is Even Number."
        : cout << num_1 << " Is Odd Number.";
        
    return 0;
}