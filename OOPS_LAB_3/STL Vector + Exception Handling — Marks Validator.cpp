/*
Aim:
To store student marks using vector and validate input using exceptions.

Algorithm:
1. Ask user for number of students.
2. For each student, read marks.
3. If marks not in range [0,100], throw invalid_argument exception.
4. Catch exception and skip invalid entry.
5. Display valid marks.
6. Stop.

Output:
Enter number of students: 4
Enter mark for student 1: 85
Enter mark for student 2: 105
Invalid mark (105): Mark out of range. Skipping.
Enter mark for student 3: 78
Enter mark for student 4: -5
Invalid mark (-5): Mark out of range. Skipping.

Valid marks entered:
Student 1: 85
Student 2: 78
*/

#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<int> marks;
    for (int i = 0; i < n; i++) {
        int m;
        cout << "Enter mark for student " << i+1 << ": ";
        cin >> m;

        try {
            if (m < 0 || m > 100)
                throw invalid_argument("Mark out of range");
            marks.push_back(m);
        }
        catch (const invalid_argument& ex) {
            cout << "Invalid mark (" << m << "): " 
                 << ex.what() << ". Skipping.\n";
        }
    }

    cout << "\nValid marks entered:\n";
    for (int i = 0; i < marks.size(); i++) {
        cout << "Student " << i+1 << ": " << marks[i] << endl;
    }

    return 0;
}
