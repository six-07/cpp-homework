// 题目 5.15：GradeBook Modification
// 在原 GradeBook 程序的基础上统计各等级人数，并计算平均绩点：
// A = 4，B = 3，C = 2，D = 1，F = 0。
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
    GradeBook(string courseNameValue) : courseName(courseNameValue) {
        resetCounts();
    }

    void setCourseName(string courseNameValue) {
        courseName = courseNameValue;
    }

    string getCourseName() const {
        return courseName;
    }

    void displayMessage() const {
        cout << "Welcome to the grade book for" << endl;
        cout << getCourseName() << "!" << endl;
    }

    void inputGrades() {
        char grade = '\0';
        resetCounts();

        cout << "\nEnter the letter grades." << endl;
        cout << "Enter the EOF character to end input." << endl;

        while (cin >> grade) {
            switch (grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'B':
            case 'b':
                ++bCount;
                break;
            case 'C':
            case 'c':
                ++cCount;
                break;
            case 'D':
            case 'd':
                ++dCount;
                break;
            case 'F':
            case 'f':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
                break;
            default:
                cout << "Incorrect letter grade entered. "
                     << "Enter a new grade." << endl;
                break;
            }
        }
    }

    double getGradePointAverage() const {
        int totalGrades = aCount + bCount + cCount + dCount + fCount;

        if (totalGrades == 0) {
            return 0.0;
        }

        int totalGradePoints = aCount * 4 + bCount * 3 + cCount * 2 + dCount;
        return static_cast<double>(totalGradePoints) / totalGrades;
    }

    void displayGradeReport() const {
        cout << "\nNumber of students who received each letter grade:"
             << "\nA: " << aCount
             << "\nB: " << bCount
             << "\nC: " << cCount
             << "\nD: " << dCount
             << "\nF: " << fCount << endl;

        cout << fixed << setprecision(2);
        cout << "Grade point average: " << getGradePointAverage() << endl;
    }

private:
    void resetCounts() {
        aCount = 0;
        bCount = 0;
        cCount = 0;
        dCount = 0;
        fCount = 0;
    }

    string courseName;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
};

int main() {
    GradeBook myGradeBook("CS101 C++ Programming");

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}