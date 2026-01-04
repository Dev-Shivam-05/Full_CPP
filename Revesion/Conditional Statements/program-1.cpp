// Write a program to find the largest of two numbers.

#include<iostream>
using namespace std;

int main(){
    int num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    if (num_1 == num_2)
    {
        cout << num_1 << " And " << num_2 << " Are Equal Numbers.";
    } else if (num_1 > num_2)
    {
        cout << num_1 << " Is Grater Than " << num_2;
    }
    else
    {
        cout << num_2 << " Is Grater Than " << num_1;
    }   
    
    return 0;
}