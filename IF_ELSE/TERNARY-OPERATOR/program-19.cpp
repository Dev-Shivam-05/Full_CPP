// Check If A Student has passed or faled using ternary Operator

#include<iostream>
using namespace std;

int main() {

    int total_subject,total_marks,percentage;

    cout << "Enter Your Total Subject : ";
    cin >> total_subject;

    cout << "Enter Your Total Marks : ";
    cin >> total_marks;

    percentage = total_marks / total_subject;

    (percentage <= 100 && percentage > 0)
        ?(percentage >= 33)
            ? cout << "Congratulaton!! , You HAve PAssed This EXamination. by GEtteing " << percentage << "%."
            : cout << "Sorry, You HAve Failed This Examination by Getting " << percentage << "%.";    
        :cout << "Something Went Wrong!!";

    return 0;
}