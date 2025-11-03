// Swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main()
{
    int num_1, num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    cout << endl
         << "Numbers Before Swap-ing Are :" << endl;
    cout << "Number 1 :- " << num_1 << endl;
    cout << "Number 2 :- " << num_2;

    // Swap-ing Process
    num_1 = num_1 + num_2;
    num_2 = num_1 - num_2;
    num_1 = num_1 - num_2;
    cout << endl
         << "Numbers After Swap-ing Are :" << endl;
    cout << "Number 1 :- " << num_1 << endl;
    cout << "Number 2 :- " << num_2;
    return 0;
}