// Use ternary Operator to check if a number is positive or negative

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    (num_1 > 0)
        ? cout << num_1 << " Is Positive Number."
        : cout << num_1 << " Is Negative Number.";

    return 0;
}