// Display the day of the week based on user input (1-7).

#include<iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter YOur Choice (1 - 7):- ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << endl << "Monday Is The " << choice << "st Day Of The Week." << endl;
        break;
    
    case 2:
        cout << endl << "Tuesday Is The " << choice << "nd Day Of The Week." << endl;
        break;
    
    case 3:
        cout << endl << "Wednesday Is The " << choice << "rd Day Of The Week." << endl;
        break;
    
    case 4:
        cout << endl << "Thursday Is The " << choice << "th Day Of The Week." << endl;
        break;
    
    case 5:
        cout << endl << "Friday Is The " << choice << "th Day Of The Week." << endl;
        break;
    
    case 6:
        cout << endl << "Saturday Is The " << choice << "th Day Of The Week." << endl;
        break;
    
    case 7:
        cout << endl << "Sunday Is The " << choice << "th Day Of The Week." << endl;
        break;
    
    default:
        cout << endl << "Error " << choice << " Day Doesn't exist In the Week." << endl;
        break;
    }
    return 0;
} 