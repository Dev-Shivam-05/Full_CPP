    // Write a program that takes a student’s marks (0-100) and assigns grades (A, B, C, D, F) using relational operators.

    #include<iostream>
    using namespace std;

    int main() {
        
        int student_marks,subject; // defined variables
        double percentage,total_marks; // defined variables

        cout << "Enter The Total Number Of Subject Exam You Have Given : ";
        cin >> subject; // taking input from User For Subject

        cout << "Enter Your Total Marks : ";
        cin >> student_marks; // taking input from User For Total Marks Achevied

        total_marks = subject * 100; // finding total number of marks 
        
        percentage = student_marks / subject ; // using percentage formula
        
        if (percentage >= 85 ) { // checking condition For Grades
            cout << "----Congratulations You Have Achevied A Grade With " << percentage << "% In Your Examination----";
        }
        else if (percentage >= 69 && percentage <= 84 ) { //checking condition For Grades
            cout << "----Congratulation You Have Achevied B Grade With " << percentage << "% In Your Examination----";
        }
        else if (percentage >= 53 && percentage <= 68) { //checking condition For Grades
            cout << "----Congratulation You Have Achived C Grade With " << percentage << "% In Your Examination----";
        }
        else if (percentage >= 38 && percentage <= 52) { //checking condition For Grades
            cout << "----Congratulation You Have Achived D Grade With " << percentage << "% In Your Examinations----";
        }
        else if (percentage < 37) { //checking condition For Grades
            cout << "Sorry You Have Failed This Examination!. Better Luck Next Time";
        }
        
        return 0;
    }