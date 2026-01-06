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
    Student s1;

    cout << "=== Input Student 1 ===\n";
    cout << "Enter Student ID: ";
    cin >> s1.studentID;
    cout << "Enter Nickname: ";
    cin >> s1.nickname;
    cout << "Enter Line ID: ";
    cin >> s1.lineID;
    cout << "Enter Phone Number: ";
    cin >> s1.phoneNumber;

    cout << "\n=== Output Student 1 ===\n";
    cout << "Student ID: " << s1.studentID << "\n";
    cout << "Nickname: " << s1.nickname << "\n";
    cout << "Line ID: " << s1.lineID << "\n";
    cout << "Phone Number: " << s1.phoneNumber << "\n";

    return 0;
}