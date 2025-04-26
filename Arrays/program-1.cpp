#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter The Size Of The Array :- ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " Elements :- " << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << "Array[" << i << "] :- ";
        cin >> array[i];
    }
    
    cout << "The Inputed Array Is :- ";
    for (int i = 0; i <= size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}