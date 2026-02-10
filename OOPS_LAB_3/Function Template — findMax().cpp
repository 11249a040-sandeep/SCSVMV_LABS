/*
Aim:
To demonstrate templates by creating a function template findMax().

Algorithm:
1. Create template function findMax(T a, T b).
2. Compare two values and return maximum.
3. Use with int, double, and string.
4. Display results.
5. Stop.

Output:
Max(int): 20
Max(double): 3.14
Max(string): banana
*/

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max(int): " << findMax(10, 20) << endl;
    cout << "Max(double): " << findMax(3.14, 2.72) << endl;
    cout << "Max(string): " << findMax(string("apple"), string("banana")) << endl;

    return 0;
}
