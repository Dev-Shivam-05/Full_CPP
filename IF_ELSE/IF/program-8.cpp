// Compare two Number and print the larger one

#include<iostream>
using namespace std;

int main() {

    int num_1 , num_2;

    cout << "Enter 1st Number : ";
    cin >> num_1;

    cout << "Enter 2nd Number : ";
    cin >> num_2;

    if (num_1 > num_2)
    {
        cout << num_1 << " Is Larger Than " << num_2;
    }
    else 
    {
        cout << num_2 << " Is Larger Than " << num_1;
    }
    return 0;
}