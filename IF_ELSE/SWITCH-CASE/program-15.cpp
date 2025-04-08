// Print The Month Name For A Given Number (1-12)

#include<iostream>
using namespace std;

int main() {

    int month_number;

    cout << "Enter A Number(1-12) : ";
    cin >> month_number;

    switch (month_number)
    {
        case 1:
            cout << "January Is The 1st Month Of The Year.";
            break;
        case 2:
            cout << "February Is The 2nd Month Of The Year.";
            break;
        case 3:
            cout << "March Is The 3rd Month Of The Year.";
            break;
        case 4:
            cout << "April Is The 4th Month Of The Year.";
            break;
        case 5: 
            cout << "May Is The 5th Month Of The Year.";
            break;
        case 6:
            cout << "June Is The 6th Month Of THe Year.";
            break;
        case 7:
            cout << "July Is The 7th Month Of The Year.";
            break;
        case 8:
            cout << "Augest Is The 8th Month Of The Year.";
            break;
        case 9:
            cout << "September Is The 9th Month Of The Year.";
            break;
        case 10:
            cout << "October Is The 10th Month Of The Year.";
            break;
        case 11:
            cout << "November Is The 11th Month Of The Year.";
            break;
        case 12:
            cout << "December Is The 12th Month Of The Year.";
            break;
        default:
            cout << "Sorry! Something Went Wrong Please Input Between (1-12)";
            break;
    }

    return 0;
}