// Create a simple calculator using switch-case.

#include<iostream>
using namespace std;

int main(){
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;
    int choice;
    do
    {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Module" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Your choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Program is successfully executed" << endl;
            break;
        
        case 1:
            cout << "The Addition Of " << num_1 << " And " << num_2 << " Is " << num_1 + num_2;
            break;
        
        case 2:
            cout << "The Subtraction Of " << num_1 << " And " << num_2 << " Is " << num_1 - num_2;
            break;
        
        
        case 3:
            cout << "The Multiplication Of " << num_1 << " And " << num_2 << " Is " << num_1 * num_2;
            break;
        
        case 4:
            cout << "The Division Of " << num_1 << " And " << num_2 << " Is " << num_1 / num_2;
            break;
        
        case 5:
            cout << "The Module Of " << num_1 << " And " << num_2 << " Is " << num_1 % num_2;
            break;
        
        default:
            break;
        }
    } while (choice != 0);
    
    return 0;
}