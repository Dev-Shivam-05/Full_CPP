// Write a program to find the largest of three numbers.


#include<iostream>
using namespace std;

int main(){
    int num_1,num_2,num_3;

    cout << "Enter A Number :- ";
    cin >> num_1;

    cout << "Enter Another Number :- ";
    cin >> num_2;

    cout << "Enter Another Number :- ";
    cin >> num_3;

    if (num_1 >= num_2 && num_1 >= num_3)
    {
        cout << num_1 << " Is Grater Than " << num_2 << " And " << num_3;
    } else if (num_2 > num_3)
    {
        cout << num_2 << " Is Grater Than " << num_1 << " And " << num_3;
    }
    else
    {
        cout << num_3 << " Is Grater Than " << num_1 << " And " << num_2;
    }   
    
    return 0;
}