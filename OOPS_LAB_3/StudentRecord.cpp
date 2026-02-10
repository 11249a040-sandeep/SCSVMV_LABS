/*
Aim:
To develop a class to represent student information and display their details.

Algorithm:
1. Start the program.
2. Define a class Student with name, rollNo, and marks.
3. Define display() to print student details.
4. Create three student objects.
5. Assign values to each object.
6. Call display() for each object.
7. End the program.

Output:
Name: Raj, Roll No: 101, Marks: 85.5
Name: Divya, Roll No: 102, Marks: 90
Name: Kumar, Roll No: 103, Marks: 78.2
*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display() {
        cout << "Name: " << name
             << ", Roll No: " << rollNo
             << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1, s2, s3;

    s1.name = "Raj";   
    s1.rollNo = 101; 
    s1.marks = 85.5;

    s2.name = "Divya"; 
    s2.rollNo = 102; 
    s2.marks = 90.0;

    s3.name = "Kumar"; 
    s3.rollNo = 103; 
    s3.marks = 78.2;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
