// Prit the Sum Of First N Natural Number

#include<iostream>
using namespace std;

int main() {

    int num_1,sum;

    cout << "Enter A Number : ";
    cin >> num_1;

    for (int i = 1; i <= num_1; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}