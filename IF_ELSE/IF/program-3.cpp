// Write A program To check Weather A person is eligible to vote (age should greater than or equal to 18)

#include<iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter Your Age : ";
    cin >> age;

    if (age >= 18)
    {
        cout << "Wow,You're Eligible For Voting.";
    }
    else
    {
        cout << "Sorry,You're Not Eligible For Voting.";
    }

    return 0;
}