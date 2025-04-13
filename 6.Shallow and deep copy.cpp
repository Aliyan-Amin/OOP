#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;

public:
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
        cout << "\nCopy constructor (deep copy) called!" << endl;
    }

    Person& operator=(const Person& p) {
        if (this != &p) {
            delete[] name;
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
        }
        cout << "\nAssignment operator (deep copy) called!" << endl;
        return *this;
    }

    void display() const {
        cout << "Name: " << name << endl;
    }

    ~Person() {
        delete[] name;
        cout << "\nDestructor called!" << endl;
    }
};

int main() {
    Person person1("Ahmed");
    cout << "Person 1: ";
    person1.display();

    Person person2 = person1;
    cout << "\nPerson 2 (after deep copy): ";
    person2.display();

    person2 = Person("Saad");
    cout << "Person 2 (after modification): ";
    person2.display();
    cout << "Person 1 (after person2 modified): ";
    person1.display();

    Person* person3 = new Person("Farhan");
    Person* person4 = person3;
    cout << "Person 3 (before shallow copy): ";
    person3->display();
    cout << "Person 4 (shallow copy): ";
    person4->display();

    delete person4;

    return 0;
}
