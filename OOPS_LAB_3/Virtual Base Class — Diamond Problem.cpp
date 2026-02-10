/*
Aim:
To demonstrate virtual base class usage to resolve diamond problem in inheritance.

Algorithm:
1. Create base class Student with rollNo and name.
2. Create Test and Sports classes virtually inheriting Student.
3. Create Result class inheriting Test and Sports.
4. Initialize Student through constructor.
5. Calculate total marks and display details.
6. Stop the program.

Output:
Roll: 101, Name: Carl, Total: 170
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;
public:
    Student(int r = 0, string n = "") : rollNo(r), name(n) {}
};

class Test : virtual public Student {
protected:
    int marks1, marks2;
public:
    Test(int m1 = 0, int m2 = 0) : marks1(m1), marks2(m2) {}
};

class Sports : virtual public Student {
protected:
    int sportScore;
public:
    Sports(int s = 0) : sportScore(s) {}
};

class Result : public Test, public Sports {
public:
    Result(int r, string n, int m1, int m2, int s)
        : Student(r, n), Test(m1, m2), Sports(s) {}

    void display() {
        int total = marks1 + marks2 + sportScore;
        cout << "Roll: " << rollNo
             << ", Name: " << name
             << ", Total: " << total << endl;
    }
};

int main() {
    Result res(101, "Carl", 78, 82, 10);
    res.display();
    return 0;
}
