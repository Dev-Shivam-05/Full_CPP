// Check If A Number Is Even Or Odd

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    if (num_1 % 2 == 0)
    {
        cout << num_1 << " Is Even Number.";
    }
    else
    {
        cout << num_1 << " Is Odd Number.";
    }

    return 0;
}