// Take two numbers and display their sum, difference, product, and division.

#include<iostream>
using namespace std;

int main(){
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    cout << "The sum Of " << num_1 << " And " << num_2 << " Is = " << num_1 + num_2 << endl;
    cout << "The difference Of " << num_1 << " And " << num_2 << " Is = " << num_1 - num_2 << endl;
    cout << "The product Of " << num_1 << " And " << num_2 << " Is = " << num_1 * num_2 << endl;
    cout << "The division Of " << num_1 << " And " << num_2 << " Is = " << num_1 / num_2 << endl;
    return 0;
}