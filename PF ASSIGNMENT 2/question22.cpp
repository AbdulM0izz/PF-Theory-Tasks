#include <iostream>
using namespace std;
struct Student {
    int studentId;
    string studentName;
    float gpa;
    float percentage;
    int marks[5];  
};

int calculateTotal(Student s) {
    int total = 0;
    for(int i = 0; i < 5; i++) {
        total += s.marks[i];
    }
    return total;
}
int main()
{
     Student student;
    
    
    cout << "Enter Student ID: ";
    cin >> student.studentId;
    
    cout << "Enter Student Name: ";
    cin.ignore();  
    getline(cin, student.studentName);
    
    cout << "Enter Student GPA: ";
    cin >> student.gpa;
    
    cout << "Enter Student Percentage: ";
    cin >> student.percentage;
    
    
    cout << "Enter 5 subject marks:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Enter mark " << i+1 << ": ";
        cin >> student.marks[i];
    }
    
    
    int totalMarks = calculateTotal(student);
    cout << "\nTotal Marks: " << totalMarks << endl;

    
    





    return 0;
}