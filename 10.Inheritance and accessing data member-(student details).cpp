#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string Name;
    int age;

public:
    Person(string n, int a) : Name(n), age(a) {}

    string getName() {
        return Name;
    }

    int getAge() {
        return age;
    }
};

class Student : public Person {
private:
    char grade;

public:
    Student(string n, int a, char g) : Person(n, a), grade(g) {}

    void displayStudentInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    string name;
    int age;
    char grade;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter grade: ";
    cin >> grade;

    Student student(name, age, grade);

    cout << "\nStudent details: " << endl;
    cout << "------------------" << endl;
    student.displayStudentInfo();

    return 0;
}
