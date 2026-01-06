#include <iostream>
#include <string>
using namespace std;

struct Student {
    string studentID;
    string nickname;
    string lineID;
    string phoneNumber;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
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

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << (i + 1) << ":\n";
        cout << "Student ID: " << students[i].studentID << "\n";
        cout << "Nickname: " << students[i].nickname << "\n";
        cout << "Line ID: " << students[i].lineID << "\n";
        cout << "Phone Number: " << students[i].phoneNumber << "\n";
        cout << "----------------------\n";
    }

    return 0;
}