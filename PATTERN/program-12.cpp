#include<iostream>
using namespace std;

int main()
{

    int i,j;

    for (i=1; i<=5; i++)
    {
        for (j=1; j<=6-i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}