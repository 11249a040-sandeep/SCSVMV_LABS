/*
Aim:
To demonstrate accessing object members using pointer to object.

Algorithm:
1. Create Student class with roll and name.
2. Create object and pointer.
3. Use -> operator to access members.
4. Display data.
5. Stop program.

Output:
Enter Roll and Name: 101 Arjun
Roll: 101, Name: Arjun
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
    Student s1, *ptr;
    ptr = &s1;

    ptr->getData();
    ptr->showData();

    return 0;
}
