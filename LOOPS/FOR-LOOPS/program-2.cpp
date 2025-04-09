// Print the Table of any number entered by the user.

#include<iostream>
using namespace std;

int main() {
    
    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    for (int i = 1; i <= 10;  i++)
    {
        cout << num_1 << " X " << i << " = " << num_1 * i << endl;
    }

    return 0;
}