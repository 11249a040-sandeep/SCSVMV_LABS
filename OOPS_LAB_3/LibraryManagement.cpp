/*
Aim:
To write a C++ program using constructor overloading and copy constructor for book details.

Algorithm:
1. Start program.
2. Create class Book with title, author, and price.
3. Implement default constructor.
4. Implement parameterized constructor.
5. Implement copy constructor.
6. Display data using display().
7. Stop.

Output:
Default Constructor Object:
Title: , Author: , Price: 0
Parameterized Constructor Object:
Title: C++ Programming, Author: Bjarne Stroustrup, Price: 750.5
Copy Constructor Object:
Title: C++ Programming, Author: Bjarne Stroustrup, Price: 750.5
*/

#include <iostream>
using namespace std;

class Book {
    string title, author;
    float price;
public:
    Book() {
        title = "";
        author = "";
        price = 0;
    }

    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: " << price << endl;
    }
};

int main() {
    Book b1;
    Book b2("C++ Programming", "Bjarne Stroustrup", 750.50);
    Book b3(b2);

    cout << "Default Constructor Object:" << endl;
    b1.display();

    cout << "Parameterized Constructor Object:" << endl;
    b2.display();

    cout << "Copy Constructor Object:" << endl;
    b3.display();

    return 0;
}
