// Find the largest of two number using ternary operator

#include<iostream>
using namespace std;

int main() {

    int num_1 , num_2;

    cout << "Enter 1st Number : ";
    cin >> num_1;

    cout << "Enter 2nd Number : ";
    cin >> num_2;

    (num_1 > num_2)
        ? cout << num_1 << " Is Greater Than " << num_2
        : cout << num_2 << " Is Greater Than " << num_1;

    return 0;
}