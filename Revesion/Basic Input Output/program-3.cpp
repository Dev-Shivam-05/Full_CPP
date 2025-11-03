// Calculate the area and perimeter of a rectangle.

#include<iostream>
using namespace std;

int main() {
    int length , width; 

    cout << "Enter The length Of Rectangle :- ";
    cin >> length;
    
    cout << "Enter The Width Of Rectangle :- ";
    cin >> width;

    const int area = length * width;
    const int perimeter = 2 * (length * width);
    
    cout << "Area Of Rectangle :- " << area << endl;
    cout << "Perimeter Of Rectangle :- " << perimeter << endl;
    
    return 0;
}