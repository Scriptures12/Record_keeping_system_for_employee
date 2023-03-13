#ifndef EMPLOYEE_H
#define EMPLOYEE_H


class Employee
{
    public:
        Employee();
        void EmployeeData();
        void DisplayData();
    protected:

    private:
        int Emp_ID;
        char Name[30];
        char Department[30];
        int Telephone;
        int Salary;
};

#endif // EMPLOYEE_H


