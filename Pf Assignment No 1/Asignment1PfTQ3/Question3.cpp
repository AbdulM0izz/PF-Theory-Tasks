#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int creditHours1, creditHours2, creditHours3, creditHours4, creditHours5;
    int gradePoints1, gradePoints2, gradePoints3, gradePoints4, gradePoints5;
    double totalCreditHours, totalGradePoints, SGPA;

    // Input credit hours and grade points for 5 courses
    cout << "Enter credit hours for course 1: ";
    cin >> creditHours1;
    cout << "Enter grade points for course 1: ";
    cin >> gradePoints1;

    cout << "Enter credit hours for course 2: ";
    cin >> creditHours2;
    cout << "Enter grade points for course 2: ";
    cin >> gradePoints2;

    // ... similar input for courses 3, 4, and 5

    // Calculate total credit hours and grade points
    totalCreditHours = creditHours1 + creditHours2 + creditHours3 + creditHours4 + creditHours5;
    totalGradePoints = (creditHours1 * gradePoints1) + (creditHours2 * gradePoints2) + (creditHours3 * gradePoints3) + (creditHours4 * gradePoints4) + (creditHours5 * gradePoints5);

    // Calculate SGPA
    SGPA = totalGradePoints / totalCreditHours;

    // Display SGPA with two decimal places
    cout << fixed << setprecision(2);
    cout << "Your SGPA is: " << SGPA << endl;

    return 0;
}
