// Write a program to check if a character is a vowel or consonant.

#include<iostream>
using namespace std;

int main(){
    int character;

    cout << "Enter A Character From A To Z :- ";
    cin >> character;
    
    if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' || character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' )
    {
        cout << "The Character " << character << " Is a Vowel." << endl;
    } else {
        cout << "The Character " << character << " Is a Consonant." << endl;
    }
    
    return 0;
}