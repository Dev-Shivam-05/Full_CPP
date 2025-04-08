// find the largest among three number using nested if-else

#include<iostream>
using namespace std;

int main() {

    int num_1 , num_2 , num_3;

    cout << "Enter 1st Number : ";
    cin >> num_1;

    cout <<  "Enter 2nd Number : ";
    cin >> num_2;

    cout << "Enter 3rd Number : ";
    cin >> num_3;

    if (num_1 > num_2)
    {
        if (num_1 > num_3)
        {
            cout << num_1 << "Is Largest Amoung All";
        }
        else 
        {
            cout << num_3 << " Is Largest Amoung All.";
        }
    }    
    else
    {
        if (num_2 > num_3)
        {
            cout << num_2 << " Is Largest Amoung All.";
        }
        else
        {
            cout << num_3 << " Is The Largest Among All.";
        }
    }

    return 0;
}