/*
Aim:
To implement single inheritance using Person as a base class and Teacher as a derived class.

Algorithm:
1. Start the program.
2. Create base class Person with name and age.
3. Create derived class Teacher with subject and salary.
4. Accept data for both base and derived class members.
5. Display all the details.
6. Stop the program.

Output:
Enter name and age: Ravi 35
Enter subject and salary: Math 55000
Name: Ravi, Age: 35
Subject: Math, Salary: 55000
*/

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Teacher : public Person {
    string subject;
    float salary;
public:
    void getTeacherData() {
        getData();
        cout << "Enter subject and salary: ";
        cin >> subject >> salary;
    }
    void displayTeacher() {
        display();
        cout << "Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    Teacher t;
    t.getTeacherData();
    t.displayTeacher();
    return 0;
}
