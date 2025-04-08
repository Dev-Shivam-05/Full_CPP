//Enter a character and checks if it's a vowel(use switch case)

#include<iostream>
using namespace std;

int main() {

    char character;

    cout << "Enter A Characer (A-Z) : ";
    cin >> character;

    switch (character)
    {
        case 'A':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'E':
            cout << character << " Yes It Is A Vowel Characer.";
            break;
        case 'I':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'O':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'U':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'a':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'e':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'i':
            cout << character << " Yes It Is A Vowel Characte.";
            break;
        case 'o':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        case 'u':
            cout << character << " Yes It Is A Vowel Character.";
            break;
        default:
            cout << character << " It Is A Contrants Character.";
    }

    return 0;
}