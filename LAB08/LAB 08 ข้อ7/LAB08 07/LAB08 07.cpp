#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineId;
    Phone myContact;
    Parent myParent;
};

int main() {
    Student s;

    // INPUT
    cout << "=== Input Student Data ===\n";
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Nickname: ";
    cin >> s.nickname;
    cout << "Enter Line ID: ";
    cin >> s.lineId;

    cout << "\n=== Student Contact Info ===\n";
    cout << "Enter Mobile Number: ";
    cin >> s.myContact.mobile;
    cout << "Enter Home Number: ";
    cin >> s.myContact.home;

    cout << "\n=== Parent Data ===\n";
    cout << "Enter Parent Name: ";
    cin >> s.myParent.name;
    cout << "Enter Relationship: ";
    cin >> s.myParent.relationship;

    cout << "\n=== Parent Contact Info ===\n";
    cout << "Enter Parent Mobile Number: ";
    cin >> s.myParent.contact.mobile;
    cout << "Enter Parent Home Number: ";
    cin >> s.myParent.contact.home;

    // OUTPUT ()
    cout << "\nStudent Data (Student):\n";
    cout << "ID: " << s.id << endl;
    cout << "Nickname: " << s.nickname << endl;
    cout << "Line ID: " << s.lineId << endl;

    cout << "\nStudent Contact Info:\n";
    cout << "Mobile: " << s.myContact.mobile << endl;
    cout << "Home: " << s.myContact.home << endl;

    cout << "\nParent Data:\n";
    cout << "Name: " << s.myParent.name << endl;
    cout << "Relationship: " << s.myParent.relationship << endl;

    cout << "\nParent Contact Info:\n";
    cout << "Mobile: " << s.myParent.contact.mobile << endl;
    cout << "Home: " << s.myParent.contact.home << endl;

    return 0;
}