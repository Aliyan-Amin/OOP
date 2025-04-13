#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }

    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    Manager(string n, int i, double s, string d) : Employee(n, i, s) {
        department = d;
    }

    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Employee emp("Ahmed", 1001, 45000);
    cout << "--- Employee Details ---" << endl;
    emp.displayEmployee();

    Manager mgr("Amin", 2002, 70000, "Marketing");
    cout << "\n--- Manager Details ---" << endl;
    mgr.displayManager();

    return 0;
}
