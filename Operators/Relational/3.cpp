// Write a program that takes three side lengths of a triangle and checks if a valid triangle can be formed using the condition

#include<iostream>
using namespace std;

int main() {
    
    int height,hypotenoues,base,results; // declaring variables

    cout << "Enter The Height Of Triangle : " ;
    cin >> height;  // taking input from user

    cout << "Enter the Hypotenoues Of Triangle : ";
    cin >> hypotenoues;  // taking input from user

    cout << "Enter teh Base Of Traingle : ";
    cin >> base; // taking input from user
    
    if (height + hypotenoues > base && base + hypotenoues > height && height + base > hypotenoues) { // checking condition
        cout << "Yes The Triangle Is Valid" ;
    }
    else {
        cout << "No The Triangle Is Not Valid" ;
    }

    return 0;
}