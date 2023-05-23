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
    cout << "Enter Name of student1: ";
    getline(cin, student1.name);
    cout << "Enter Roll Number of student1: ";
    cin >> student1.rollNumber;
    cout << "Enter marks of 3 subjects for student1:" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Subject " << i+1 << " : ";
        cin >> student1.marks[i];
    }

    CulturalActivity student2;
    cout << "Enter Name of student2: ";
    cin.ignore();
    getline(cin, student2.name);
    cout << "Enter Roll Number of student2: ";
    cin >> student2.rollNumber;
    cout << "Enter attendance of activity for student2: ";
    cin >> student2.attendance;

    float totalMarks = student1.marks[0] + student1.marks[1] + student1.marks[2];
    float averageMarks = totalMarks / 3;
    float averageWithAttendance = (averageMarks + student2.attendance) / 2;

    cout << "Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Average Marks: " << averageWithAttendance << endl;

    return 0;
}
