/*
Aim:
To demonstrate defining functions inside and outside the class using employee details.

Algorithm:
1. Start the program.
2. Create class Employee with empID, name, salary.
3. Define setEmployee() inside the class.
4. Declare displayEmployee() but define it outside the class.
5. Create two employee objects and assign values.
6. Display details using displayEmployee().
7. Stop the program.

Output:
Employee ID: 101, Name: Ravi, Salary: Rs.50000.75
Employee ID: 102, Name: Priya, Salary: Rs.62000.5
*/

#include <iostream>
using namespace std;

class Employee {
public:
    int empID;
    string name;
    float salary;

    void setEmployee(int id, string n, float s) {
        empID = id;
        name = n;
        salary = s;
    }

    void displayEmployee();
};

void Employee::displayEmployee() {
    cout << "Employee ID: " << empID
         << ", Name: " << name
         << ", Salary: Rs." << salary << endl;
}

int main() {
    Employee e1, e2;

    e1.setEmployee(101, "Ravi", 50000.75);
    e2.setEmployee(102, "Priya", 62000.50);

    e1.displayEmployee();
    e2.displayEmployee();

    return 0;
}
