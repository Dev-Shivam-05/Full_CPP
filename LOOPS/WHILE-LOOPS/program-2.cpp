// Print the reverse of a number

#include<iostream>
using namespace std;

int main() {

    long int num_1;
    int reminder,reverse = 0;

    cout << "Enter A Number : ";
    cin >> num_1;

    while (num_1 != 0)
    {
        reminder = num_1 % 10;
        cout << reminder << endl;
        reverse = reminder + (reverse * 10);
        cout << reverse << endl;
        num_1 = num_1 / 10;
        cout << num_1 << endl;
    }
    cout << reverse;
    
    return 0;
}