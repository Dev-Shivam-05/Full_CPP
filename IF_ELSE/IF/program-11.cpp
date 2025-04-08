// Check Weather a Person Is eligible For Voting Or Not, And If Eligible , Check Weather They Are eligible For Contesting an Election (age >= 25)

#include<iostream>
using namespace std;

int main() {
    
    int age;

    cout << "Enter Your Current Age : ";
    cin >> age;

    if (age >= 18)
    {
        if (age >= 25)
        {
            cout << "Your Age Is " << age << " So You're Eligible For Contesting An Election.";
        }
        else
        {
            cout << "Your Age Is " << age << " And You're Eligble For Voting But Not For Contesting An Election.";
        }
    }
    else
    {
        cout << "Sorry Your Age Is " << age << " And Mininum Age For Voting Is 18.";
    }

    return 0;
}