/*
Aim:
To implement multilevel inheritance using Employee, Manager, and Director classes.

Algorithm:
1. Create base class Employee with name and ID.
2. Derive Manager from Employee and include department.
3. Derive Director from Manager and include salary.
4. Accept details from user at all levels.
5. Display all details.
6. Stop the program.

Output:
Enter Employee name and ID: Arjun 101
Enter department: HR
Enter salary: 90000
Name: Arjun, ID: 101, Dept: HR, Salary: 90000
*/

#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void getEmployee() {
        cout << "Enter Employee name and ID: ";
        cin >> name >> id;
    }
};

class Manager : public Employee {
protected:
    string dept;
public:
    void getManager() {
        getEmployee();
        cout << "Enter department: ";
        cin >> dept;
    }
};

class Director : public Manager {
    float salary;
public:
    void getDirector() {
        getManager();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display() {
        cout << "Name: " << name << ", ID: " << id
             << ", Dept: " << dept
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Director d;
    d.getDirector();
    d.display();
    return 0;
}
