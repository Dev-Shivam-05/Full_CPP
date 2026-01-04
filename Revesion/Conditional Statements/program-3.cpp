// Check whether a given year is a leap year.

#include<iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter A Year :- ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << endl << year << " Is A Leap Year.";
        return 0;
    }

    cout << endl << year << " Is Not  A Leap Year.";
    
    return 0;
}