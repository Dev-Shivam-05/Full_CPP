// Take A Number (1-7) And Print The Day Of The week

#include<iostream>
using namespace std;

int main() {

    int index_day;

    cout << "Enter Any Number Between (1 - 7) : ";
    cin >> index_day;

    switch (index_day)
    {
    case 1:
        cout << "1st Day Of Week Is Monday.";
        break;
    case 2:
        cout << "2nd Day Of Week Is Tuesday.";
        break;
    case 3:
        cout << "3rd Day Of Week Is Wednesday.";
        break;
    case 4:
        cout << "4th Day Of Week Is Thusday.";
        break;
    case 5:
        cout << "5th Day Of Week Is Friday.";
        break;
    case 6:
        cout << "6th Day Of Week Is Saturday.";
        break;
    case 7:
        cout << "7th Day Of Week Is Sunday.";
        break;
    default:
        cout << "Something Went Wrong.";
        break;
    }
    return 0;
}