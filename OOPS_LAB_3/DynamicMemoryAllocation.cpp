/*
Aim:
To dynamically allocate memory for an integer array using new and release it using delete.

Algorithm:
1. Ask the user for array size.
2. Allocate memory dynamically using new.
3. Input array elements.
4. Display the array.
5. Deallocate memory using delete[].
6. Stop the program.

Output:
Enter size of array: 3
Enter 3 elements: 10 20 30
You entered: 10 20 30
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "You entered: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
