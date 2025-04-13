#include <iostream>
using namespace std;

class Employee 
{
    static int Employee_Count;

public:
    Employee() 
	{
        Employee_Count++;
    }

    static void display_Employee_Count() 
	{
        cout << "Total number of employees: " << Employee_Count << endl;
    }
};

int Employee::Employee_Count = 0;

int main() {
    Employee::display_Employee_Count();

    Employee E1;
	Employee E2;
	Employee E3;
    Employee::display_Employee_Count();

    Employee E4;
	Employee E5;
    Employee::display_Employee_Count();

    return 0;
}
