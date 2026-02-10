/*
Aim:
To demonstrate defining functions inside and outside the class using patient records.

Algorithm:
1. Start the program.
2. Create class Patient with patientID, name, disease.
3. Define setPatient() inside the class.
4. Define showPatient() outside the class.
5. Create two objects and assign values.
6. Display patient details.
7. Stop the program.

Output:
Patient ID: 301, Name: Arjun, Disease: Fever
Patient ID: 302, Name: Meena, Disease: Diabetes
*/

#include <iostream>
using namespace std;

class Patient {
public:
    int patientID;
    string name;
    string disease;

    void setPatient(int id, string n, string d) {
        patientID = id;
        name = n;
        disease = d;
    }

    void showPatient();
};

void Patient::showPatient() {
    cout << "Patient ID: " << patientID
         << ", Name: " << name
         << ", Disease: " << disease << endl;
}

int main() {
    Patient p1, p2;

    p1.setPatient(301, "Arjun", "Fever");
    p2.setPatient(302, "Meena", "Diabetes");

    p1.showPatient();
    p2.showPatient();

    return 0;
}
