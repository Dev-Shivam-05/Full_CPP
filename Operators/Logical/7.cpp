// Ask the user to enter a number. Check if it lies in the range (10, 50) (exclusive) OR [20, 60] (inclusive).

#include<iostream>
using namespace std;

int main() {
    
    int num_1; // declaring variable

    cout << "inclusive range : - " << endl << "10 - 50" << endl; // showing user the range
    cout << "Exclusive range : - " << endl << "20 - 60 " << endl; // showing user the range

    cout << "Enter A Number from the given range : ";
    cin >> num_1; // taking input from user

    if (num_1 > 10 && num_1 < 50 || num_1 >= 20 && num_1 <= 60) { // cheking condition
        cout << "The Inputed Number " << num_1 << " Is In Between The Specified Range"; //printing if condition gets true
    }
    else {
        cout << "The Inputed Number " << num_1 << " Is Not In The Specified Range"; //printing if condition gets false
    }

    return 0;
}