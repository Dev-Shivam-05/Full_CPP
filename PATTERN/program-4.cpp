#include<iostream>
using namespace std;

int main() 
{

    char j1,j;
    int i;

    cout << "ENter A Charcter IN Upper Case (A-Z) : ";
    cin >> j1;


    for (i=1; i<=5; i++)
    {
        for (j='A'; j<=j1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}