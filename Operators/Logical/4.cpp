// Assume the correct username is "admin" and password is "password123".

#include<iostream>
#include<string>
using namespace std;

int main() {
    
    string username,password; //declaring variables

    cout << "Enter Username : ";
    cin >> username; // taing input from user

    cout << "Enter Password : ";
    cin >> password; // taing input from user

    if (username == "admin" && password == "password123") { // checking condition
        cout << "Access Granted"; // printing if condition gets true
    } 
    else {
        cout << "Access Denied"; // printing if condition gets false
    }
    
    return 0;
}