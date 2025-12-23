#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayStudentInfo(string name, string id, double score, char grade)
{
    cout << "Student Name: " << name << "\n";
    cout << "Student ID  : " << id << "\n";
    cout << "Score       : " << fixed << setprecision(2) << score << "\n";
    cout << "Grade       : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';
}

int main()
{
    int N; // จำนวนนักเรียน (Number of students)
    int M; // จำนวนวิชา (Number of subjects)

    // 1. รับขนาดของ Array จากผู้ใช้
    cout << "Enter number of students: ";
    cin >> N;
    cout << "Enter number of subjects: ";
    cin >> M;

    // 2. การจองพื้นที่หน่วยความจำ (Dynamic Allocation)
    // สำหรับ 1D Array
    string* name = new string[N];
    string* id = new string[N];
    double* total = new double[N];
    char* grade = new char[N];

    // สำหรับ 2D Array (score)
    double** score = new double* [N];
    for (int i = 0; i < N; i++) {
        score[i] = new double[M]; // จองพื้นที่วิชา (M) ให้แต่ละนักเรียน
    }

    // 3. เริ่มรับข้อมูล
    for (int i = 0; i < N; i++) {
        total[i] = 0;
        cout << "\n--- Student " << i + 1 << " ---\n";

        cout << "Enter your name: ";
        cin.ignore(); // ล้าง buffer ก่อนรับ string
        getline(cin, name[i]);

        cout << "Enter your ID: ";
        cin >> id[i];

        for (int j = 0; j < M; j++) {
            cout << "Enter your score for subject " << j + 1 << ": ";
            cin >> score[i][j];
            total[i] += score[i][j];
        }

        double averageScore = total[i] / M;
        calculateGrade(averageScore, grade[i]);
    }


    cout << "\n================================\n";
    cout << "       REPORT CARD\n";
    cout << "================================\n";
    for (int i = 0; i < N; i++) {
        double averageScore = total[i] / M;
        cout << "\nStudent " << i + 1 << " Information:\n";
        displayStudentInfo(name[i], id[i], averageScore, grade[i]);
    }


    for (int i = 0; i < N; i++) {
        delete[] score[i];
    }
    delete[] score;


    delete[] name;
    delete[] id;
    delete[] total;
    delete[] grade;

    return 0;
}