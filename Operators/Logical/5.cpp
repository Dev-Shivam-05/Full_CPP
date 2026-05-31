// Take three numbers as input and find the largest among them.

#include<iostream>
using namespace std;

int main() {
    
    int num_1,num_2,num_3; // declaring variables

    cout << "Enter A Number : ";
    cin >> num_1; // takinng input from user

    cout << "Enter A New Number : ";
    cin >> num_2; // takinng input from user

    cout << "Enter Another Number : ";
    cin >> num_3; // takinng input from user

    if (num_1 > num_3 && num_1 > num_2) { // checking condition
        cout << num_1 << " Is The Largest Among All."; // printing if condition gets true
    }
    else if (num_2 > num_3 && num_2 > num_1) { // checking condition
        cout << num_2 << " Is The Largest Among All."; // printing if condition gets true
    }
    else if (num_3 > num_2 && num_3 > num_1) { // checking condition
        cout << num_3 << " Is The Largest Among All."; // printing if condition gets true
    }
    else {
        cout << "Sorry,Something Went Wrong"; // printing if none condtion gets true
    }
    
    return 0; 
}