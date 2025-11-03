// Take user input for name and age and display a greeting message.
#include<iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout << "Enter Your Name :- ";
    cin >> name;
    
    cout << "Hello " << name << " How Are You";
    
    cout << "Enter Your Age :- ";
    cin >> age;

    cout << "I Think You Are " << age << " Years old.";
    return 0;
}