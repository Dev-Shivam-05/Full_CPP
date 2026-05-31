#include<iostream>
using namespace std;

int main() {
    
    char firstName[10];
    string lastName;
    long int num;
    float percentage;
    double percentage_2;
    char a;
    
    cout<<"Enter Your Name : ";
    cin>>firstName;
    
    cout<<"Enter Your Last Name : ";
    cin>>lastName;

    cout<<"Enter Your Number : ";
    cin>>num;

    cout<<"Enter Your 10th Percentagecentage : ";
    cin>>percentage;
    
    // cout<<"Enter Your 12th Percentagecentage : ";
    // cin>>percentage_2;

    cout<<"Enter First Word OF Your Name : ";
    cin>>a;

    cout<<"Your Name Is : "<<firstName + lastName<<endl;
    cout<<"Your Mobile Number Is : "<<num<<endl;
    cout<<"You achived "<<percentage<<"% in Your 10th Class Examination"<<endl;
    cout<<"You achived "<<percentage_2<<"% in Your 12th Class Examination"<<endl;
    cout<<"The first Word Of Your Name is : "<<a<<endl;

    return 0;
}