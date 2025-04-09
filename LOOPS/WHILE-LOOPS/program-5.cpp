// Print The FActors of Input Number

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "Enter A Number : ";
    cin >> num_1;

    cout << "The Factor Of " << num_1 << " Is : " << endl;
    int i=1;
    while (i <= num_1)
    {
        if (num_1 % i == 0)
        {
            cout << i << endl;
        }
        i++; 
    }
    

    return 0;
}