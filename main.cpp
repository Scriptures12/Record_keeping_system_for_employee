#include <iostream>
#include <iomanip>
#include "Employee.h"
using namespace std;

int z;
int List = 0;

void show(){
cout<<endl<<"______________________________________________________________________________________________________"<<endl;
cout<<setw(8)<<"EmployeeID"<<setw(17)<<"Employee Name"<<setw(17)<<"Department"<<setw(17)<<"Telephone Line"<<setw(17)<<"Salary"<<endl;
}

void select(){
cout<<"Phase 1"<<endl;
cout<<"_______"<<endl;
cout<<" please perform any of these operations or enter any key to exit"<<endl;
cout<<"1. Start over"<<endl;
cout<<"2. ID seacrh"<<endl;
cin>>z;
}

void selection(){
cout<<"phase 3"<<endl;
cout<<"_______"<<endl;
cout<<"1.Enter 1 to restart or press any key to exit"<<endl;
cin>>List;
}
int main()
{
string Data[]={};

do{
        int data_number=0;
        cout<<"phase2"<<endl;
        cout<<"_____________________________"<<endl;
        cout<<"How many Employee data do want to display?"<<endl;
        cin>>data_number;
        Employee Emp[data_number]{};

        for(int i=0;i<data_number;i++){
            Emp[i].EmployeeData();
        }
        show();
        for(int i=0;i<data_number;i++){

            Emp[i].DisplayData();
        }
        int findID;
        select();
        if(z==2){
            do{
                cout<<"Enter ID number"<<endl;
                cin>>findID;
                for(int i=0;i<1;i++){
                   show();
                    Emp[findID=1].DisplayData();
                }
                if(List==1){
                        cout<<data_number<<endl;
                }
            }
            while(z==1);
            return 0;
        }

}while(z==1);

    return 0;
}
