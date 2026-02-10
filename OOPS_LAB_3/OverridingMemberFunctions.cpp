/*
Aim:
To demonstrate function overriding and runtime polymorphism using virtual functions.

Algorithm:
1. Create base class Account with virtual displayBalance().
2. Create derived classes Savings and Current overriding the function.
3. Use base class pointer to point to derived class objects.
4. Call displayBalance() using pointer.
5. Observe runtime binding.
6. Stop the program.

Output:
Savings Account Balance: ₹5000
Current Account Balance: ₹10000
*/

#include <iostream>
using namespace std;

class Account {
public:
    virtual void displayBalance() {
        cout << "Generic account balance.\n";
    }
};

class Savings : public Account {
public:
    void displayBalance() override {
        cout << "Savings Account Balance: ₹5000\n";
    }
};

class Current : public Account {
public:
    void displayBalance() override {
        cout << "Current Account Balance: ₹10000\n";
    }
};

int main() {
    Account *acc;

    Savings s;
    Current c;

    acc = &s;
    acc->displayBalance();

    acc = &c;
    acc->displayBalance();

    return 0;
}
