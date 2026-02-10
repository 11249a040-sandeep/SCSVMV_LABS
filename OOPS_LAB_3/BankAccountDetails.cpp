/*
Aim:
To implement a class Account that stores customer account details.

Algorithm:
1. Start the program.
2. Define a class Account with accNo, name, and balance.
3. Define display() to print account details.
4. Create two account objects.
5. Assign values to both objects.
6. Display the details using display().
7. End the program.

Output:
Account No: 1001, Name: Ramesh, Balance: 25000.5
Account No: 1002, Name: Sita, Balance: 40000.75
*/

#include <iostream>
using namespace std;

class Account {
public:
    int accNo;
    string name;
    float balance;

    void display() {
        cout << "Account No: " << accNo
             << ", Name: " << name
             << ", Balance: " << balance << endl;
    }
};

int main() {
    Account a1, a2;

    a1.accNo = 1001;
    a1.name = "Ramesh";
    a1.balance = 25000.50;

    a2.accNo = 1002;
    a2.name = "Sita";
    a2.balance = 40000.75;

    a1.display();
    a2.display();

    return 0;
}
