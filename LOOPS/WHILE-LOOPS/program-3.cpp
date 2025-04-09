// Count The Digit in A number

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "Enter A NUmber : ";
    cin >> num_1;

    int i = 0,length=0;
    while (num_1 != 0)
    {
        length = num_1 = num_1 / 10;
        i++;
    }
    cout << i << "  ";
    
    
    return 0;
}