#include<iostream>
using namespace std;

int main() 
{
    int i,j,k;

    for (i=1; i<=5; i++)
    {
        for (k=5-i; k>=1; k--)
        {
            cout << "  ";
        }
        for (j=5; j>=6-i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}