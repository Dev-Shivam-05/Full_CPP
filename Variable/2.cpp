#include<iostream>
using namespace std;

int main() {
    
    const float PIE = 3.14;
    float area;
    int radius;

    cout << "Enter The Radius Of Circle : "<<endl;
    cin >> radius;
    
    area = PIE * radius * radius;

    cout << "The Are Of Circle is : "<<area<<endl;

    return 0;
}
