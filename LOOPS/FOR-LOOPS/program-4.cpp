// print the factorial of a number

#include<iostream>
using namespace std;

int main() {

    int num_1,factorial = 1;

    cout << "Enter A Number : ";
    cin >> num_1;

    for (int i = 1; i <= num_1; i++)
    {
        factorial *= i;
    }
    cout << "The Factorial Of " << num_1 << " Is " << factorial << endl;
    return 0;
}