#include <iostream>
#include <string>
using namespace std;

struct Phone {
    char mobile[10];
    char home[10];
};

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    char Address[30];
    char PhoneTel[10];
};

int main() {
    Student s1;
    Address addr1;
    Phone ph1;

    // TODO 3) ???????????????????? 1 ?? (?????????? + ????????)
    cout << "==== Student Information ====\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "==== Address Information ====\n";
    cout << "House Number: ";
    cin >> addr1.number;
    cout << "Road: ";
    cin >> addr1.road;
    cout << "District: ";
    cin >> addr1.district;
    cout << "Province:";
    cin >> addr1.province;

    cout << "==== Phone Information ====\n";
    cout << "Phone - Home: ";
    cin >> ph1.home;
    cout << "Phone - Mobile: ";
    cin >> ph1.mobile;

    cout << "\n===== Output =====\n";
    cout << "Student ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Surname: " << s1.surname << endl;
    cout << "===== Address =====\n";
    cout << "Address - House Number: " << addr1.number << endl;
    cout << "Address - Road: " << addr1.road << endl;
    cout << "Address - District: " << addr1.district << endl;
    cout << "Address - Province: " << addr1.province << endl;
    cout << "===== Phone =====\n";
    cout << "Phone - Home: " << ph1.home << endl;
    cout << "Phone - Mobile: " << ph1.mobile << endl;

    return 0;
}