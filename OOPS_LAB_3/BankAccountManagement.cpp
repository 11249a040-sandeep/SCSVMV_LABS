/*
Aim:
To implement constructor overloading and static member variables using a BankAccount class.

Algorithm:
1. Start the program.
2. Define class BankAccount with accNo, name, balance, and static count.
3. Create default constructor and parameterized constructor.
4. Implement deposit() and withdraw() functions.
5. Create objects using constructors.
6. Display object details.
7. Display total accounts using static function.
8. Stop.

Output:
Acc No: 0, Name: , Balance: 5000
Acc No: 1001, Name: Arjun, Balance: 23000.8
Acc No: 1002, Name: Meena, Balance: 40000.5
Total Accounts: 3
*/

#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    string name;
    float balance;
    static int count;
public:
    BankAccount() {
        accNo = 0;
        name = "";
        balance = 0;
        count++;
    }

    BankAccount(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        count++;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        balance -= amt;
    }

    void display() {
        cout << "Acc No: " << accNo
             << ", Name: " << name
             << ", Balance: " << balance << endl;
    }

    static void showCount() {
        cout << "Total Accounts: " << count << endl;
    }
};

int BankAccount::count = 0;

int main() {
    BankAccount b1;
    BankAccount b2(1001, "Arjun", 25000.75);
    BankAccount b3(1002, "Meena", 40000.50);

    b1.deposit(5000);

    b1.display();
    b2.withdraw(2000);
    b2.display();
    b3.display();

    BankAccount::showCount();

    return 0;
}
