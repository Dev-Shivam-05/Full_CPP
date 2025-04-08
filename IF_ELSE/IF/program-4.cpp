// Check if Number Is Divisible By 5 or not

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    if (num_1 % 5 == 0)
    {
        cout << num_1 << " Is Divisible By 5.";
    }
    else
    {
        cout << num_1 << " Is Not Divisible By 5.";
    }
    return 0;
}