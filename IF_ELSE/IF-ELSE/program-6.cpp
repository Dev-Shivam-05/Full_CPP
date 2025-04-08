// Check If A Student Is Passed Or FAiled BAssed On Marks (Passing Marks is 40)

#include<iostream>
using namespace std;

int main() {

    int marks;

    cout << "Enter your Marks : ";
    cin >> marks;

    if (marks >= 40)
    {
        cout << "You Have Passed This Examination.";
    }
    else
    {
        cout << "Sorry,You HAve Failed This Examination.";
    }
    return 0;
}