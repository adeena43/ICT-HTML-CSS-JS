/*Design a C++ program to manage student marks. Allow the user to input
marks for students in three subjects (Mathematics, English, and Science). The
program should calculate the total marks, average marks, and display the grade
for each student. The user can specify the number of students and then input
the marks for each subject for each student. Finally, display the marks, total,
average, and grade for each student. Assume a grading system with the
following criteria:
90 or above: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
Below 60: Grade F*/

#include <iostream>

using namespace std;

// Function to calculate the grade based on the given criteria
char calculateGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents;

    // Input the number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Arrays to store marks for each subject
    float mathMarks[numStudents];
    float englishMarks[numStudents];
    float scienceMarks[numStudents];

    // Loop to input marks for each student
    for (int i = 0; i < numStudents; ++i) {
        cout << "\nEnter marks for student " << i + 1 << ":\n";
        cout << "Mathematics: ";
        cin >> mathMarks[i];
        cout << "English: ";
        cin >> englishMarks[i];
        cout << "Science: ";
        cin >> scienceMarks[i];
    }

    // Loop to calculate and display total, average, and grade for each student
    for (int i = 0; i < numStudents; ++i) {
        float total = mathMarks[i] + englishMarks[i] + scienceMarks[i];
        float average = total / 3.0;

        // Display marks, total, average, and grade for each student
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Mathematics: " << mathMarks[i] << "\n";
        cout << "English: " << englishMarks[i] << "\n";
        cout << "Science: " << scienceMarks[i] << "\n";
        cout << "Total: " << total << "\n";
        cout << "Average: " << average << "\n";
        cout << "Grade: " << calculateGrade(average) << "\n";
    }

    return 0;
}
