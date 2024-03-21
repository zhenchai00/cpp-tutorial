// put class here

#include <iostream>
using namespace std;

class Employee
{
    // data member, constructor, destructor, functions
private:
    // data member
    int employeeId;
    string employeeName;
    string employeeDepartment;
        double employeeSalary;
        string jobTitle;

public:
    // constructor
    Employee()
    {
        employeeId = 0;
        employeeName = "Hello";
        employeeSalary = 0;
        employeeDepartment = "Bye";
        jobTitle = "";
    }
    Employee(int employeeId, string employeeName, string employeeDepartment, double employeeSalary, string jobTitle);

    // destructor - kill the process
    ~Employee()
    {
        cout << "Employee of " << employeeName << " is now remove from the memory" << endl;
    };

    // functions 
    void setName (string name)
    {
        this->employeeName = name;
    }

    string getName()
    {
        return employeeName;
    }

    // declared externally 
    void setId(int employeeId);
    int getEmployeeId();
    void display()
    {
        cout << "Name: " << employeeName << endl;
        cout << "ID: " << employeeId << endl;
        cout << "Job Title: " << jobTitle << endl;
        cout << "Salary: RM " << employeeSalary << endl;
        cout << "Department: " << employeeDepartment << endl << endl;
    }
};

Employee::Employee(int employeeId, string employeeName, string employeeDepartment, double employeeSalary, string jobTitle)  // externally declare the constructor
{
    this->employeeId = employeeId;
    this->employeeName = employeeName;
    this->employeeDepartment = employeeDepartment;
    this->employeeSalary = employeeSalary;
    this->jobTitle = jobTitle;
}

void Employee::setId (int employeeID) // externally declare the function body
{
    this->employeeId = employeeID;
};

int Employee::getEmployeeId ()
{
    return employeeId;
};