#include <iostream>     // ใช้สำหรับรับข้อมูลจากผู้ใช้ (cin) และแสดงผล (cout)
#include <string>       // ใช้สำหรับตัวแปรชนิด string และ getline()
#include <iomanip>      // ใช้สำหรับการจัดรูปแบบแสดงผล เช่น setprecision()
#include <limits>       // ใช้สำหรับ numeric_limits เพื่อเคลียร์ buffer ของ cin

int main()
{
    std::string StudentID;  // ตัวแปรเก็บรหัสนักศึกษา
    std::string name;       // ตัวแปรเก็บชื่อนักศึกษา
    float score;            // ตัวแปรเก็บคะแนน
    std::string grade;      // ตัวแปรเก็บเกรด

    // ----- รับค่า Student ID -----
    std::cout << "Enter StudentID: ";
    std::cin >> StudentID;

    // เคลียร์ buffer ของ cin (เพื่อป้องกันปัญหาเวลาใช้ getline() หลังจาก cin)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // ----- รับชื่อเต็มนักศึกษา -----
    std::cout << "Enter Name: ";
    std::getline(std::cin, name);  // ใช้ getline เพื่อให้พิมพ์ชื่อที่มีช่องว่างได้

    // ----- รับคะแนน พร้อมตรวจสอบความถูกต้อง -----
    while (true)
    {
        std::cout << "Enter Score: ";
        if (std::cin >> score) // ถ้าผู้ใช้กรอกเป็นตัวเลข
        {
            if (score >= 0 && score <= 100)  // ตรวจว่าคะแนนอยู่ในช่วง 0–100
                break; // ถ้าอยู่ในช่วงที่ถูกต้อง ให้ออกจากลูป
            else
                std::cout << "Error: score must be 0 - 100!\n"; // ถ้าคะแนนเกิน 100 หรือติดลบ
        }
        else
        {
            std::cout << "Error: Only number!\n"; // ถ้ากรอกไม่ใช่ตัวเลข
            std::cin.clear(); // เคลียร์สถานะ error ของ cin
        }
        // ล้างค่าที่ผู้ใช้กรอกผิดออกจาก buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // ----- คำนวณเกรดตามช่วงคะแนน -----
    if (score >= 90) grade = "A";
    else if (score >= 80) grade = "B";
    else if (score >= 70) grade = "C";
    else if (score >= 60) grade = "D";
    else grade = "F";

    // ----- แสดงรายงานผลนักศึกษา -----
    std::cout << "----------Student Report----------\n";
    std::cout << "StudentID: " << StudentID << "\n";  // แสดงรหัสนักศึกษา
    std::cout << "Name: " << name << "\n";             // แสดงชื่อ
    std::cout << "Score: " << score << "\n";           // แสดงคะแนน
    std::cout << "Grade: " << grade << "\n";           // แสดงเกรด

    return 0; // สิ้นสุดโปรแกรมและคืนค่า 0 หมายถึงจบการทำงานปกติ
}