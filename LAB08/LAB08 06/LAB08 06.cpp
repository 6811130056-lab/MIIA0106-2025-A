#include <iostream>
#include <cstring>
using namespace std;

struct Student {
    char studentID[11];
    char nickname[20];
};

int main() {
    Student s1;
    Student* p = nullptr;

    p = &s1;

    cout << "Enter student ID: ";
    cin.getline((*p).studentID, 11);

    cout << "Enter nickname: ";
    cin.getline((*p).nickname, 20);

    cout << "ID: " << (*p).studentID << endl;
    cout << "Nickname: " << (*p).nickname << endl;

    return 0;
}
