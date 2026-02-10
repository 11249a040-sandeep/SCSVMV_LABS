/*
Aim:
To implement a class template Calculator<T> for generic arithmetic operations.

Algorithm:
1. Create class template with add, sub, mul, and divide functions.
2. Handle division by zero separately.
3. Create objects with int and double types.
4. Display results.
5. Stop program.

Output:
Int add: 15, div: 5
Double mul: 10, sub: 1.8
*/

#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T sub(T a, T b) { return a - b; }
    T mul(T a, T b) { return a * b; }
    T divide(T a, T b) {
        if (b == 0) {
            cerr << "Error: Division by zero.\n";
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator<int> ci;
    cout << "Int add: " << ci.add(10, 5)
         << ", div: " << ci.divide(10, 2) << endl;

    Calculator<double> cd;
    cout << "Double mul: " << cd.mul(2.5, 4.0)
         << ", sub: " << cd.sub(5.0, 3.2) << endl;

    return 0;
}
