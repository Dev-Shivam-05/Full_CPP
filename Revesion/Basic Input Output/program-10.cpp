// Take marks of 5 subjects and find total, average, and percentage.

#include<iostream>
using namespace std;

int main() {
    string student_name;
    int subject_1,subject_2,subject_3,subject_4,subject_5;

    cout << "Enter student name :- ";
    cin >> student_name;

    cout << "Enter Marks Of Subject 1 :- ";
    cin >> subject_1;

    cout << "Enter Marks Of Subject 2 :- ";
    cin >> subject_2;
    
    cout << "Enter Marks Of Subject 3 :- ";
    cin >> subject_3;
    
    cout << "Enter Marks Of Subject 4 :- ";
    cin >> subject_4;
    
    cout << "Enter Marks Of Subject 5 :- ";
    cin >> subject_5;

    int total = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;

    float average = total / 5;

    float percentage = average;

    cout << "===== Student Marksheet =====" << endl;
    cout << "Student Name : " << student_name << endl;
    cout << "Total Marks Obtained : " << total << endl;
    cout << "Average : " << average << endl;
    cout << "Percentage : " << percentage << endl;
    return 0;
}