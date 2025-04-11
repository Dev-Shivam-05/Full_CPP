#include<iostream>
using namespace std;

int main() 
{
    int i,k,j;

    for (i=1; i<=5; i++)
    {
        for (k=5-i; k>=1; k--)
        {
            cout << " ";
        }
        for (j=1; j<=10; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}