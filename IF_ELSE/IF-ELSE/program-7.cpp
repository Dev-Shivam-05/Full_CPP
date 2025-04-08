// Determine If A Year is A Leap Year Or Not 

#include<iostream>
using namespace std;

int main() {

    long int year;

    cout << "----Enter Any Year To Check Wheather It Is A Leap Year Or Not----" << endl << endl;

    cout << "Enter Any Year : ";
    cin >> year;

    if (year % 4 ==0)
    {
        cout << year << " Is The Leap Year.";
    }
    else
    {
        cout << year << " Is Not A Leap Year";
    }

    return 0;
}