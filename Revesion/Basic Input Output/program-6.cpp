// Find the ASCII value of a given character.

#include<iostream>
using namespace std;

int main() {
    char character;

    cout << "Enter A Character :- ";
    cin >> character;

    int ASCIIvalue = (int)character;
    cout << "The Ascii Value Of Character " << character << " Is :- " << ASCIIvalue << endl;
    return 0;
}