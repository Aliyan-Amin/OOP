#include <iostream>
using namespace std;

class Employee {
    const double Salary;
    int id;

public:
    Employee(int emp_Id, double emp_salary) : Salary(emp_salary), id(emp_Id) 
	{
        cout << "Object address: " << this << endl;
        cout << "Employee ID: " << this->id << endl;
        cout << "Salary: $" << this->Salary << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; ++i) 
	{
        int id;
        double salary;

        cout << "\nEnter details for employee " << i + 1 << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Salary: ";
        cin >> salary;
        cout << endl;

        Employee e(id, salary);
    }

    return 0;
}
