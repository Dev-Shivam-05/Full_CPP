#include<iostream>
using namespace std;

int main()
{

    int i,j,k;

    for (i=0; i<=5; i++)
    {
        for (k=5-i; k>=1; k--)
        {
            cout << " ";
        }

        for (j=0; j<=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
        
        for (k=6-i; k<=5; k++)
        {
            cout << " ";
        }
        for (j=5-i; j>=1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}