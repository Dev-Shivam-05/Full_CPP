// Write a program to check whether a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    int num_1;
    
    cout << "Enter A Number :- ";
    cin >> num_1;

    if (num_1 % 2 == 0)
    {
        cout << "The Number " << num_1 << " Is Even.";
    }
    else
    {
        cout << "The Number " << num_1 << " Is Odd.";
    }
    return 0;
}