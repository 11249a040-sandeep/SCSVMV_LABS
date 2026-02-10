/*
Aim:
To demonstrate constructors with default arguments and calculate bonus.

Algorithm:
1. Start program.
2. Create class Employee with id, name, and salary.
3. Use constructor with default arguments.
4. Implement calcBonus() to compute 10% bonus.
5. Create objects with and without passing arguments.
6. Display salary and bonus.
7. Stop.

Output:
ID: 101, Name: Ravi, Salary: 50000, Bonus: 5000
ID: 102, Name: Priya, Salary: 60000, Bonus: 6000
ID: 0, Name: Unknown, Salary: 0, Bonus: 0
*/

#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
public:
    Employee(int i = 0, string n = "Unknown", float s = 0.0) {
        id = i;
        name = n;
        salary = s;
    }

    void calcBonus() {
        float bonus = 0.1 * salary;
        cout << "ID: " << id << ", Name: " << name
             << ", Salary: " << salary
             << ", Bonus: " << bonus << endl;
    }
};

int main() {
    Employee e1(101, "Ravi", 50000);
    Employee e2(102, "Priya", 60000);
    Employee e3;

    e1.calcBonus();
    e2.calcBonus();
    e3.calcBonus();

    return 0;
}
