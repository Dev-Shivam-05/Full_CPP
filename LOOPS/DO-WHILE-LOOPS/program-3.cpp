// Display menu Repeatedly until user chooses exit.

#include<iostream>
using namespace std;

int main() {

    int num_1,num_2,choice;

    cout << "Enter 1st Number : ";
    cin >> num_1;

    cout << "Enter 2nd Number : ";
    cin >> num_2;

    do
    {
        cout << "---- Menu ----" << endl << endl;
        cout <<  "1. Add " << endl;
        cout <<  "2. Subtract" << endl;
        cout <<  "3. Multipy " << endl;
        cout <<  "4. Divide " << endl;
        cout <<  "5. Exit " << endl;
        cout << endl << "Enter Your Choice (1-5): ";
        cin >> choice;
        
        (choice == 1)
            ? cout << "The Sum Of " << num_1 << " And " << num_2 << " Is " << num_1 + num_2
            : (choice == 2)
                ?cout << "The Subtraction Of " << num_1 << " And " << num_2 << " Is " << num_1 - num_2
                : (choice == 3)
                    ? cout << "The Ultiplication Of " << num_1  << " And " << num_2 << " Is " << num_1 * num_2
                    : (choice == 4)
                        ? cout << "The Division Of " << num_1 << " And " << num_2 << " Is " << num_1 / num_2;
    }
    while(choice != 5);

    return 0;
}