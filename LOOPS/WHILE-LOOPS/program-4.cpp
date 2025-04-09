// Sum Of Digits of a number

#include<iostream>
using namespace std;

int main() {

    int num_1,num,sum = 0;

    cout << "Enter A Number : ";
    cin >> num_1;

    num = num_1;

    while(num_1 != 0)
    {
        sum = sum + num_1 % 10;
        num_1 = num_1 / 10;
    }
    cout << "The Sum Of All Digit Of " << num << " Is " << sum << endl;

    return 0;
}