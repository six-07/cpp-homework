// 题目 3.11：修改 GradeBook 类（对应课本图 3.11~3.12）
// 在原 GradeBook 基础上做四处修改：
//   a) 增加一个 string 数据成员，保存任课教师姓名
//   b) 为教师姓名增加 set 函数和 get 函数
//   c) 构造函数改为两个参数：课程名、教师姓名
//   d) displayMessage 先输出欢迎语和课程名，再输出
//      "This course is presented by: " 加教师姓名
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
    // c) 构造函数：两个参数，课程名和教师姓名
    GradeBook(string courseNameValue, string instructorNameValue) {
        setCourseName(courseNameValue);
        setInstructorName(instructorNameValue);
    }

    // 设置课程名：超过 25 个字符时只保留前 25 个（课本原有规则）
    void setCourseName(string courseNameValue) {
        if (courseNameValue.length() <= 25) {
            courseName = courseNameValue;
        }
        if (courseNameValue.length() > 25) {
            courseName = courseNameValue.substr(0, 25);
            cout << "Name \"" << courseNameValue << "\" exceeds maximum length (25)." << endl;
            cout << "Limiting courseName to first 25 characters." << endl << endl;
        }
    }

    string getCourseName() const {
        return courseName;
    }

    // b) 教师姓名的 set 函数和 get 函数
    void setInstructorName(string instructorNameValue) {
        instructorName = instructorNameValue;
    }

    string getInstructorName() const {
        return instructorName;
    }

    // d) 输出欢迎语、课程名和教师姓名
    void displayMessage() const {
        cout << "Welcome to the grade book for" << endl;
        cout << getCourseName() << "!" << endl;
        cout << "This course is presented by: " << getInstructorName() << endl;
    }

private:
    string courseName;        // 课程名
    string instructorName;    // a) 新增：任课教师姓名
};

// 测试程序：演示修改后的 GradeBook 的各项新能力
int main() {
    GradeBook firstCourse("CS101 Introduction to C++", "Liu Xin");
    GradeBook secondCourse("Computer Science 102", "Wang Ming");

    // 1. 两个对象都能显示课程名 + 教师姓名
    firstCourse.displayMessage();
    cout << endl;
    secondCourse.displayMessage();

    // 2. 用 setInstructorName 换一位任课教师，再显示一次
    cout << endl << "Changing the instructor of CS102..." << endl;
    secondCourse.setInstructorName("Chen Hua");
    secondCourse.displayMessage();

    // 3. 课程名超过 25 个字符时的处理（课本原有规则）
    cout << endl << "A course name that is too long:" << endl;
    GradeBook thirdCourse("Introduction to Object Oriented Programming", "Li Na");
    thirdCourse.displayMessage();

    system("pause");
    return 0;
}