// Take a user's age as input. If the age is 18 or above, print "Eligible to vote," otherwise, print "Not eligible.

#include<iostream>
using namespace std;

int main() {
    
    int age; // declaring variable

    cout << "----Vote Eligibility Checker----";
    
    cout << "Enter Your Age : ";
    cin >> age;// taking input from user

    if (age > 18) { // checking condition
        cout << "Congratulation!,You're Eligible For Voting "; // printing if condition gets true
    }
    else {
        cout << "orry , You're Not Eligbile Fr Voting"; // printiong if condition gets false
    }
    return 0;
}