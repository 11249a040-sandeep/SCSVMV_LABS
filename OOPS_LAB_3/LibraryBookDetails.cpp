/*
Aim:
To create a class that represents books and displays their details.

Algorithm:
1. Start the program.
2. Define a class Book with title, author, and price.
3. Create display() to show book details.
4. Create two book objects.
5. Assign values to each object.
6. Call display() to print details.
7. End the program.

Output:
Title: C++ Programming, Author: Bjarne Stroustrup, Price: Rs.750.5
Title: Data Structures, Author: Mark Allen Weiss, Price: Rs.600.75
*/

#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: Rs." << price << endl;
    }
};

int main() {
    Book b1, b2;

    b1.title = "C++ Programming";
    b1.author = "Bjarne Stroustrup";
    b1.price = 750.50;

    b2.title = "Data Structures";
    b2.author = "Mark Allen Weiss";
    b2.price = 600.75;

    b1.display();
    b2.display();

    return 0;
}
