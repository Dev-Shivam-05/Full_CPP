// Write a program to check whether a character is uppercase, lowercase, digit, or special character.

#include<iostream>
using namespace std;

int main() {
    char a;

    cout << "Enter a Character :- ";
    cin >> a;

    if (a >= 'A' && a <= 'Z')
    {
        cout << "The Character " << a << " Is a Uppercase Letter." << endl;
    } else if (a >= 'a' && a <= 'z')
    {
        cout << "The Character " << a << " Is A Lowercase Letter." << endl;
    } else if (a >= '0' && a <= '9')
    {
        cout << "The Character " << a << " Is A Digit Letter." << endl;
    } else
    {
        cout << "The Character " << a << " Is A Special Character." << endl;
    }
    
    
    return 0;
}