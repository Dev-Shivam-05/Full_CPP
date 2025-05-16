#include<iostream>
using namespace std;

int main () {

    double HRA,DA,MA,TA;
    double PT,PF,TDS;
    double tota_dedection;
    string emp_name;
    double emp_salary,net_salary;

    HRA = 0.1 * emp_salary;
    DA = 0.08 * emp_salary;<<
    MA = 0.05 * emp_salary;
    TA = 0.08 * emp_salary;

    PT = 200;
    PF = 0.12 * emp_salary;
    TDS = 0.05 * emp_salary;

    tota_dedection = HRA + DA + MA + TA + PT + PF + TDS;

    net_salary = emp_salary - tota_dedection;

    cout << "Enter Employee Name : ";
    cin >> emp_name;

    cout << "Enter Employee Salary : ";
    cin >> emp_salary;

    cout >> net_salary;

    return 0;
}