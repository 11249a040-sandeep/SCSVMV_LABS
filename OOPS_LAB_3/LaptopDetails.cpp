/*
Aim:
To write a C++ program to represent laptop details using classes and objects.

Algorithm:
1. Start the program.
2. Define a class Laptop with data members brand, processor, and ram.
3. Define a member function display() to print laptop details.
4. Create two laptop objects.
5. Assign values to each object.
6. Call display() to print details.
7. Stop the program.

Output:
Brand: Dell, Processor: Intel i5, RAM: 8GB
Brand: HP, Processor: AMD Ryzen 5, RAM: 16GB
*/

#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    string processor;
    int ram;

    void display() {
        cout << "Brand: " << brand
             << ", Processor: " << processor
             << ", RAM: " << ram << "GB" << endl;
    }
};

int main() {
    Laptop l1, l2;

    l1.brand = "Dell";
    l1.processor = "Intel i5";
    l1.ram = 8;

    l2.brand = "HP";
    l2.processor = "AMD Ryzen 5";
    l2.ram = 16;

    l1.display();
    l2.display();

    return 0;
}
