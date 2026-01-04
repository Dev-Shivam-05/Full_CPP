// Check whether a number is divisible by 5 and 11 or not.

#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter A Number :- ";
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0)
    {
        cout << "The Number " << num << " Is Divisible With Both 5 And 11.";
    } else if (num % 5 == 0)
    {
        cout << "The Number " << num << " Is Not Divisible With 11 But It IS Divisible with 5.";
    }  else if (num % 11 == 0)
    {
        cout << "The Number " << num << " Is Not Divisible With 5 But It IS Divisible with 11.";
    } else
    {
        cout << "The Number " << num << " Is Not Divisible With 5 Nor 11.";
    }
    
    
    return 0;
}