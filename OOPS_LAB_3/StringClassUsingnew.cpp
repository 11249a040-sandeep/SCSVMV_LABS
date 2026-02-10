/*
Aim:
To dynamically allocate memory for a string using new and delete[].

Algorithm:
1. Create MyString class with a char pointer.
2. Allocate memory using new inside constructor.
3. Copy the given string.
4. Display string using display().
5. Free memory in destructor.
6. Stop program.

Output:
Hello
World
*/

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *str;
public:
    MyString(const char *s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    void display() {
        cout << str << endl;
    }
    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2("World");

    s1.display();
    s2.display();

    return 0;
}
