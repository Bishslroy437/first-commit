#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

class SubjectMarks : public Student {
public:
    int marks[3];
};

class CulturalActivity : public Student {
public:
    float attendance;
};

int main() {
    SubjectMarks student1;
    student1.name = "Ritik";
    student1.rollNumber = 101;
    student1.marks[0] = 80;
    student1.marks[1] = 90;
    student1.marks[2] = 70;

    CulturalActivity student2;
    student2.name = "Bishal";
    student2.rollNumber = 102;
    student2.attendance = 90;

    float totalMarks = student1.marks[0] + student1.marks[1] + student1.marks[2];
    float averageMarks = totalMarks / 3;
    float averageWithAttendance = (averageMarks + student2.attendance) / 2;

    cout << "Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Average Marks: " << averageWithAttendance << endl;

    return 0;
}
