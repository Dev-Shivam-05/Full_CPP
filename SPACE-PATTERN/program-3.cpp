#include<iostream>
using namespace std;

int main() 
{

    int i,j,k,rows;

    cout << "Enter A Row Size : ";
    cin >> rows;

    for (i=0; i<=rows; i++)
    {
        for (k=5-i; k>=1; k--)
        {
            cout << " ";   
        }
            for (j=0; j<=i; j++)
            {
                cout << i << " ";
            }
            cout << endl;
    }

    return 0;
}
