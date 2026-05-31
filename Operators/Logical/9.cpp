// Allow a user to enter a password up to 3 times.

#include<iostream>
#include<string>
using namespace std;

int main() {
    
    string username,password; //declaring variables

    cout << "Enter Your Username : ";
    cin >> username; //taking input from user

    cout << "Enter Your Password : ";
    cin >> password; //taking input from user

    if (password == "password@123") { //cheking condition
        cout << "Access approved"; // printing if condition get's true
    }
    else{
        cout << "Wrong Password Inputed" << endl; // printing if the condition get's false

        cout << "Enter Your Password : ";
        cin >> password; //taking input from user

        if(password == "password@123") { //cheking condition
            cout << "Access Approved"; // printing if condition get's true
        }
        else {
            cout << "Wrong Password Inputed" << endl; // printing if the condition get's false
            
            cout << "Enter Your Password : ";
            cin >> password; //taking input from user

            if (password == "password@123") { //cheking condition
                cout << "Access Approved"; // printing if condition get's true
            }
            else {
                cout << "Account Locked"; // printing if the condition get's false
            }
        }
    }

    return 0;
}