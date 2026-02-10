/*
Aim:
To demonstrate use of the 'this' pointer to distinguish between parameter and member variables.

Algorithm:
1. Create Account class with balance member.
2. Define deposit(double balance) where parameter matches member name.
3. Use this->balance to update member variable.
4. Display updated balance.
5. Stop program.

Output:
Balance: 1000
Balance: 1500
*/

#include <iostream>
using namespace std;

class Account {
    double balance;
public:
    Account(double b = 0.0) : balance(b) {}

    void deposit(double balance) {
        this->balance += balance;
    }

    void show() const {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Account a(1000.0);

    a.show();
    a.deposit(500.0);
    a.show();

    return 0;
}
