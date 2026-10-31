



#include <iostream>
#include <string>
++++++
using namespace std;

struct Student {
    int rollNo;
    string name;
};

Student s[100];
int countStudent = 0;

void addStudent() {
    cout << "Enter Roll Number: ";
    cin >> s[countStudent].rollNo;
    cout << "Enter Name: ";
    cin >> s[countStudent].name;
    countStudent++;
    cout << "Student Added Successfully!\n";
}

void displayStudents() {
    cout << "\nStudent Records:\n";
    for(int i = 0; i < countStudent; i++) {
        cout << "Roll No: " << s[i].rollNo
             << " Name: " << s[i].name << endl;
    }
}

void searchStudent() {
    int roll;
    cout << "Enter Roll Number to Search: ";
    cin >> roll;

    for(int i = 0; i < countStudent; i++) {
        if(s[i].rollNo == roll) {
            cout << "Student Found: " << s[i].name << endl;
            return;
        }
    }
    cout << "Student Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: cout << "Thank You!"; break;
            default: cout << "Invalid Choice!";
        }
    } while(choice != 4);

    return 0;
}