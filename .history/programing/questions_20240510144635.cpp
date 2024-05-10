#include<iostream>
#include<string>

using namespace std;

string employee_name;
float basic_salary , number_of_OT , salary;


void Employee_details()
{
    cout << "Employee Name: ";
    getline (cin, employee_name);
    cout << "Basic salary: ";
    cin >> basic_salary;
    cout << "Number of OT Hours worked:";
    cin >> number_of_OT;
}
void final_salary()
{
    if (basic_salary > 100000)
    {
        salary = basic_salary + (number_of_OT * 1000);
    }
    else if (basic_salary > 50000)
    {
        salary = basic_salary + (number_of_OT * 500);
    }
     else if (basic_salary > 25000)
    {
        salary = basic_salary + (number_of_OT * 350);
    }
     
     else if (basic_salary < 25000)
    {
        salary = basic_salary + (number_of_OT * 100);
    }

}
void final_output()
{
    cout << "Employee Name : " << employee_name ; 
    cout << "Basic Salary: " << basic_salary ; 
    cout << "OT Hours: " << number_of_OT ; 
    cout << "Salary: " << salary;
}


int main ()
{
    
    Employee_details();
    final_salary();
    final_output();

}