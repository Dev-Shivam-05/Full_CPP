#include<iostream>
using namespace std;

int main()
{

    int i,j,k;

    for (i=1; i<=5; i++)
    {
        for (k=4; k>=i; k--)
        {
            cout << "  ";
        }
        for (j=1; j<=i; j++)
        {
            cout << j + i -1 << " ";
        }
        for (j=i; j>=1; j--)
        {
            cout << j + i<< " ";
        }
        cout << endl;
    }
    
    return 0;
}