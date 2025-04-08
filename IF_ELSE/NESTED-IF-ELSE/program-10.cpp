// Determine the grade of a student
// above 90 : A
// 80 - 90 : B
// 70 - 80 : C
// Below 70 : D

#include <iostream>
using namespace std;

int main()
{

    int percentage;

    cout << "Enter Your Percentage : ";
    cin >> percentage;

    if (percentage <= 100 && percentage > 0)
    {

        if (percentage > 90)
        {
            cout << "Congratulation You Have Achived A Grade in You're Examination.";
        }
        else if (percentage > 80 && percentage <= 90)
        {
            cout << "Congratulation You Have Achived B Grade in You're Examination.";
        }
        else if (percentage > 70 && percentage <= 80)
        {
            cout << "Congratulation You Have Achived C Grade in You're Examination.";
        }
        else
        {
            cout << "You Have Achived D Grade In You're Examination.";
        }
    }
    else
    {
        cout << "Sorry Something Went Wrong Please Enter Between (0-100).";
    }

    return 0;
}