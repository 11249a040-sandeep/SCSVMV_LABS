/*
Aim:
To demonstrate constructors and destructors in nested classes.

Algorithm:
1. Start the program.
2. Create Department class with constructor and destructor.
3. Create University class containing Department object.
4. Initialize using constructor initializer list.
5. Display data.
6. Destructor messages display automatically.
7. Stop.

Output:
Department Computer Science created.
University SCSVMV University initialized.
University: SCSVMV University, Department: Computer Science
University SCSVMV University closed.
Department Computer Science destroyed.
*/

#include <iostream>
using namespace std;

class Department {
public:
    string deptName;

    Department(string d) {
        deptName = d;
        cout << "Department " << deptName << " created." << endl;
    }

    ~Department() {
        cout << "Department " << deptName << " destroyed." << endl;
    }
};

class University {
    string uniName;
    Department dept;
public:
    University(string u, string d) : uniName(u), dept(d) {
        cout << "University " << uniName << " initialized." << endl;
    }

    void display() {
        cout << "University: " << uniName
             << ", Department: " << dept.deptName << endl;
    }

    ~University() {
        cout << "University " << uniName << " closed." << endl;
    }
};

int main() {
    University u1("SCSVMV University", "Computer Science");
    u1.display();
    return 0;
}
