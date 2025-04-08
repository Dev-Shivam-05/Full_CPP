// write a program to check weather a given number is positive

#include<iostream>
using namespace std;

int main() {

    double num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    if (num_1 > 0)
    {
        cout << num_1 << " Is Positive.";
    }
    else
    {
        cout << num_1 << " Is The Negative.";
    }

    return 0;
}