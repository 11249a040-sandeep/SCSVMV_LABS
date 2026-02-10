/*
Aim:
To demonstrate virtual functions and late binding using Employee, FullTime, and PartTime
classes with different salary calculation methods.

Algorithm:
1. Create base class Employee with virtual calculateSalary() and show().
2. Create derived class FullTime with basic + bonus.
3. Create derived class PartTime with hourlyRate × hours.
4. Create base class pointer to point to derived objects.
5. Call show() to demonstrate runtime polymorphism.
6. Stop the program.

Output:
FullTime: Alice, Salary: 45000
PartTime: Bob, Salary: 24000
*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
public:
    Employee(const string& n = "") : name(n) {}

    virtual double calculateSalary() {
        return 0.0;
    }

    virtual void show() {
        cout << "Employee: " << name 
             << ", Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee() {}
};

class FullTime : public Employee {
    double basic, bonus;
public:
    FullTime(const string& n, double b, double bo)
        : Employee(n), basic(b), bonus(bo) {}

    double calculateSalary() override {
        return basic + bonus;
    }

    void show() override {
        cout << "FullTime: " << name 
             << ", Salary: " << calculateSalary() << endl;
    }
};

class PartTime : public Employee {
    double hourlyRate;
    int hours;
public:
    PartTime(const string& n, double r, int h)
        : Employee(n), hourlyRate(r), hours(h) {}

    double calculateSalary() override {
        return hourlyRate * hours;
    }

    void show() override {
        cout << "PartTime: " << name 
             << ", Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee* e1 = new FullTime("Alice", 40000, 5000);
    Employee* e2 = new PartTime("Bob", 300.0, 80);

    e1->show();
    e2->show();

    delete e1;
    delete e2;

    return 0;
}
