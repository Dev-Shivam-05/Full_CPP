// Use logical operators to check if a given character is a vowel (a, e, i, o, u).

#include<iostream>
using namespace std;

int main() {
    char word;// declaring ariable

    cout << "Enter Any Word (A-Z) : ";
    cin >> word; // takig input fro user

    if (word == 'a','e','i','o','u') { // checking condition
        cout << "The Word Is Vowel"; // printing if condition gets true
    }
    else {
        cout << "the Word Is Not vowel"; // printing if condition gets false
    }
    return 0;
}