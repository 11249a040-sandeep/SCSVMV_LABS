/*
Aim:
To demonstrate an array of pointers pointing to dynamically created objects.

Algorithm:
1. Ask user for number of students.
2. Create array of Student pointers.
3. For each pointer, allocate memory using new.
4. Input and display each student’s data.
5. Delete memory using delete.
6. Stop.

Output:
Enter number of students: 2
Enter Roll and Name: 101 Ravi
Enter Roll and Name: 102 Sita

Student Details:
Roll: 101, Name: Ravi
Roll: 102, Name: Sita
*/

#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    void getData() {
        cout << "Enter Roll and Name: ";
        cin >> roll >> name;
    }
    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student *s[n];

    for (int i = 0; i < n; i++) {
        s[i] = new Student;
        s[i]->getData();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        s[i]->showData();
        delete s[i];
    }

    return 0;
}
