// Passing An Array

#include<iostream>
using namespace std;

void sum_array(int array_1[]);

int main()
{
    int size,i;

    cout << "Enter The Size Of Array :- ";
    cin >> size;
    
    int array[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter the Value Of Array["<< i <<"] :- ";
        cin >> array[i];
    }
    
    for (i = 0; i < size; i++)
    {
        void sum_array(array[i]);
    }
    
    return 0;
}

void sum_array(int array_1[])
{
    int sum = 0;
    for (int i=0; i < size; i++)
    {
        sum += array_1[i];
    }

    cout << "The Sum Of All Element Of Array Is :- " << sum;
}