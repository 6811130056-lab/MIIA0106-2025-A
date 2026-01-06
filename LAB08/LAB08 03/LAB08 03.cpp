#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};Student students[5];

// TODO: ????????????????
void printStudent(Student s) {
    cout << "Student ID: ";
    cout << s.studentID << endl;
    cout << "Nickname: ";
    cout << s.nickname << endl;
    cout << "Line ID: ";
    cout << s.lineID << endl;
    cout << "Phone Number: ";
    cout << s.phoneNumber << endl;
}

int main() {
    Student s1;

    for (int i = 0; i < 5; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        cout << "Enter Student ID: ";
        cin >> students[i].studentID;
        cout << "Enter Nickname: ";
        cin >> students[i].nickname;
        cout << "Enter Line ID: ";
        cin >> students[i].lineID;
        cout << "Enter Phone Number: ";
        cin >> students[i].phoneNumber;
        cout << endl;
    }

    cout << "\n=== Output (from function) ===\n";
    for (int i = 0; i < 5; i++) {
        printStudent(students[i]);
        cout << endl;
    }

    return 0;
}