// Take two numbers as input and divide the first by the second. Print both quotient and remainder.

#include<iostream>
using namespace std;

int main() {
    
    int num1,num2,quotient,remainder; // declaring variables

    cout << "Enter A Number : ";
    cin >> num1; // TAking Input From User 

    cout << "Enter A NUmber : ";
    cin >> num2;// Taking Input From User

    quotient = num1 / num2; // Puting The result of num1 divide(/) by num2.The (/) oprator give us the quotient of two number

    remainder = num1 % num2; // Puting the Result of num1 MOdule(%) by num2. The (%) Oprator GIve US the Reminder Of Two NUmbers

    cout << "The Quotient of " << num1 << " And " << num2 << "Is" << quotient << endl; // Printing The Results of Quotient

    cout << "The Reminder Of " << num1 << " And " << num2 << " Is " << remainder; // Printing the Results of Reminder
    return 0;
}