/*
Aim:
To demonstrate file handling by writing and reading student records.

Algorithm:
1. Open file students.txt in write mode.
2. Write sample student data.
3. Close file.
4. Open file in read mode.
5. Read and display contents.
6. Stop.

Output:
Roll  Name  Marks
101    John    85
102    Alice    90
103    Bob    78
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("students.txt");
    if (!fout) {
        cerr << "Cannot create file\n";
        return 1;
    }

    fout << "101 John 85\n";
    fout << "102 Alice 90\n";
    fout << "103 Bob 78\n";
    fout.close();

    ifstream fin("students.txt");
    if (!fin) {
        cerr << "Cannot open file\n";
        return 1;
    }

    cout << "Roll  Name  Marks\n";
    int roll, marks;
    string name;

    while (fin >> roll >> name >> marks) {
        cout << roll << "    " << name << "    " << marks << endl;
    }

    fin.close();
    return 0;
}
