// Write a program to check whether a number is positive, negative, or zero.

#include<iostream>
using namespace std;

int main() {
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    if (num_1 > num_2)
    {
        cout << endl << num_1 << " Is Greater Then "<< num_2 << ".";
    } else if (num_1 < num_2)
    {
        cout << endl << num_2 << " Is Greater Then "<< num_1 << ".";
    } else {
        cout << endl << num_1 << " And "<< num_2 << "Are Equal.";
    }

    return 0;
}