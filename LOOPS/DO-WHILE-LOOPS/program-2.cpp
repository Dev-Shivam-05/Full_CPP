// Print The MUltipication tabel of any number

#include<iostream>
using namespace std;

int main() {

    int num_1;

    cout << "ENter A NUmber : ";
    cin >> num_1;

    int i = 1;
    do
    {
        cout << num_1 << " X " << i << " = " << num_1 * i;
        i++;
    }
    while(i <= 10);

    return 0;
}