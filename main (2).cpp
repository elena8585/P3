#include <iostream>
#include <string>

using namespace std;

class Person {
protected: 
    string firstName;  
    string lastName; 

public:
    Person(string firstName, string lastName) {
        this->firstName = firstName;
        this->lastName = lastName;
    }

    void displayName() {
        cout << firstName << " " << lastName;
    }
};

class Student : public Person {
public:
    double average;   

    Student(string firstName, string lastName, double average)
        : Person(firstName, lastName), average(average) { 
    }

    void displayInfo() {
        cout << "Student: ";
        displayName();
        cout << ", Average: " << average << endl;
    }
};

class Professor : public Person {
public:
    double salary;

    Professor(string firstName, string lastName, double salary)
        : Person(firstName, lastName), salary(salary) {
    }

    void displayInfo() {
        cout << "Professor: ";
        displayName();
        cout << ", Salary: " << salary << endl;
    }
};

int main() {
    Student student1("Hossin", "Ahmadi", 18.25);
    Student student2("Nima", "Mohammadi", 17.2);
    Student student3("Mobina", "Hossini", 19.35);
    Professor professor1("Dr. Sina", "Niksirat", 60000.0);
    Professor professor2("Dr. Sara", "Karimi", 800000.0);

    cout << "Students:" << endl;
    student1.displayInfo();
    student2.displayInfo();
    student3.displayInfo();
    cout << "\nProfessors:" << endl;
    professor1.displayInfo();
    professor2.displayInfo();

    return 0;
}