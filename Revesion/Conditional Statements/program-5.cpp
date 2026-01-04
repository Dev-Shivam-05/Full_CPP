// Take marks and print grade (A/B/C/D/Fail).
#include <iostream>
using namespace std;

int main()
{
    int total_marks, grade = 'F';

    cout << "Enter A Number :- ";
    cin >> total_marks;

    if (total_marks > 80)
    {
        grade = 'A';
    }
    else if (total_marks > 60)
    {
        grade = 'B';
    }
    else if (total_marks > 50)
    {
        grade = 'C';
    }
    else if (total_marks > 35)
    {
        grade = 'D';
    }
    else
    {
        grade = 'D';
    }

    cout << "Student Scored " << grade << " With Total Marks " << total_marks << ".";
    return 0;
}