#include "Employee.h"
#include <iostream>
#include<iomanip>
using namespace std;
Employee::Employee()
{
    //ctor
}


void Employee::EmployeeData(){

    cout<<"Please enter your ID:  ";
    cin>>Emp_ID;
    cout<<"Enter your name:  ";
    cin>>Name;
    cout<<"\n";
    cout<<"Enter your department:  ";
    cin>>Department;
    cout<<"\n";
    cout<<"Enter your Telephone number:  ";
    cin>>Telephone;
    cout<<"\n";
    cout<<"Enter your SALARY:   ";
    cin>>Salary;

}



void Employee::DisplayData()
{
    //cout<<endl<<"***************************************************************************************************"<<endl;
   // cout<<setw(8)<<"Employee ID"<<setw(17)<<"Employee Name"<<setw(17)<<"Department"<<setw(15)<<"Telephone"<<setw(25)<<"Salary"<<endl;
    cout<<setw(8)<<Emp_ID<<setw(17)<<Name<<setw(17)<<Department<<setw(17)<<Telephone<<setw(17)<<Salary<<endl;
//cout<<"   "<<endl;

}


