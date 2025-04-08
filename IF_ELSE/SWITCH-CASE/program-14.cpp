// Calculate take two number and an oprator (+,-,*,/,%) using switch

#include<iostream>
using namespace std;

int main() {

    int num_1 , num_2;
    char oprator;

    cout << "Enter 1st Number : ";
    cin >> num_1;

    cout << "Enter 2nd Number : ";
    cin >> num_2;


    cout << endl << endl << "--------- Operations --------" << endl;

    cout << " ~ Press + To Perform Addition." << endl
     << " ~ Press - To Perform Subtracion." << endl
     << " ~ Press * To Perform Multipication." << endl
     << " ~ Press / to Perform Division." << endl
     << " ~ Press % To Perform Moduls.";

    cout << endl << endl << " Enter Any Operation To Perform : ";
    cin >> oprator;

    switch (oprator)
    {
        case '+':
            cout << "The Sum Of " << num_1 << " And " << num_2 << " Is " << num_1 + num_2;
            break;
        case '-':
            cout << "The Subtraction Of " << num_1 << " And " << num_2 << " Is " << num_1 - num_2;
            break;
        case '*':
            cout << "The Product Of " << num_1 << " And " << num_2 << " Is " << num_1 * num_2;
            break;
        case '/':
            cout << "The Division Of " << num_1 << " And " << num_2 << " Is " << num_1 / num_2;
            break;
        case '%':
            cout << "The Modulas Of " << num_1 << " And " << num_2 << " Is " << num_1 % num_2;
            break;
    }

    return 0;
}