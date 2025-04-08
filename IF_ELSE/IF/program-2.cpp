// Write a program to check weather a student has passed an exam (pass marks 35)

#include<iostream>
using namespace std;

int main() {

    double marks;

    cout << "Enter Your Marks : ";
    cin >> marks;

    if (marks >= 35)
    {
        cout << "Yeah ! You Have Passed The Examination.";
    }
    else
    {
        cout << "Sorry,You Have Failed This Examination.";
    }
    return 0;
}