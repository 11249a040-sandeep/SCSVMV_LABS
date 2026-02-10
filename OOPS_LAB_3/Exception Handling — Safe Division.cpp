/*
Aim:
To demonstrate exception handling by implementing safe division.

Algorithm:
1. Create function safeDiv(a, b).
2. If b == 0 throw runtime_error exception.
3. In main, take input and call safeDiv inside try block.
4. Catch exception and print error message.
5. Stop.

Output:
A) Enter numerator and denominator: 10 2
   Result: 5

B) Enter numerator and denominator: 10 0
   Error: Division by zero attempted
*/

#include <iostream>
#include <stdexcept>
using namespace std;

double safeDiv(double a, double b) {
    if (b == 0)
        throw runtime_error("Division by zero attempted");
    return a / b;
}

int main() {
    double x, y;
    cout << "Enter numerator and denominator: ";
    cin >> x >> y;

    try {
        cout << "Result: " << safeDiv(x, y) << endl;
    }
    catch (const runtime_error& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
