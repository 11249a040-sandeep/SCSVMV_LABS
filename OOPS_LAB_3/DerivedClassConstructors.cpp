/*
Aim:
To demonstrate the order of constructor and destructor calls in inheritance.

Algorithm:
1. Create base class Book with constructor and destructor.
2. Create derived class LibraryBook inheriting Book.
3. Create object of derived class.
4. Observe constructor/destructor order.
5. Stop the program.

Output:
Base class Book constructor
Derived class LibraryBook constructor
Derived class LibraryBook destructor
Base class Book destructor
*/

#include <iostream>
using namespace std;

class Book {
public:
    Book() {
        cout << "Base class Book constructor\n";
    }
    ~Book() {
        cout << "Base class Book destructor\n";
    }
};

class LibraryBook : public Book {
public:
    LibraryBook() {
        cout << "Derived class LibraryBook constructor\n";
    }
    ~LibraryBook() {
        cout << "Derived class LibraryBook destructor\n";
    }
};

int main() {
    LibraryBook lb;
    return 0;
}
