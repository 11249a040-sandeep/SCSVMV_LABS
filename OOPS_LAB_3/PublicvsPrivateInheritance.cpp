/*
Aim:
To demonstrate the difference between public and private inheritance.

Algorithm:
1. Create Base class with show() function.
2. Derive PublicDerived publicly and PrivateDerived privately.
3. Show accessibility difference.
4. Display demonstration output.
5. Stop program.

Output:
Base public function
Base public function
*/

#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base public function\n";
    }
};

class PublicDerived : public Base {
public:
    void display() {
        show();
    }
};

class PrivateDerived : private Base {
public:
    void display() {
        show();  // accessible inside private inheritance
    }
};

int main() {
    PublicDerived pub;
    PrivateDerived pri;

    pub.display();
    pri.display();

    return 0;
}
