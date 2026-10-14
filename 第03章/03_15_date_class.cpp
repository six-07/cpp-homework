// 题目 3.15：Date 类
// 数据成员：月（int）、日（int）、年（int）
// 要求：
//   1. 构造函数用三个参数初始化数据成员
//   2. 题目假定「日」和「年」的值是正确的，但「月」必须在 1~12 之间，
//      如果不在这个范围，就把月份设成 1
//   3. 每个数据成员都有 set 函数和 get 函数
//   4. displayDate 用 月/日/年 的格式（中间用斜杠分隔）显示日期
// 测试程序：建立两个 Date 对象（其中一个月份故意填错），演示各类功能。
#include <cstdlib>
#include <iostream>
using namespace std;

class Date {
public:
    // 构造函数：三个参数，分别初始化月、日、年
    Date(int monthValue, int dayValue, int yearValue) {
        setMonth(monthValue);    // 月份要检查是否在 1~12 之间
        setDay(dayValue);        // 题目假定日、年的值是正确的
        setYear(yearValue);
    }

    // 月份必须在 1~12 之间，否则设为 1
    void setMonth(int monthValue) {
        if (monthValue >= 1 && monthValue <= 12) {
            month = monthValue;
        } else {
            month = 1;
        }
    }

    int getMonth() const {
        return month;
    }

    void setDay(int dayValue) {
        day = dayValue;
    }

    int getDay() const {
        return day;
    }

    void setYear(int yearValue) {
        year = yearValue;
    }

    int getYear() const {
        return year;
    }

    // 按 月/日/年 的格式显示日期
    void displayDate() const {
        cout << month << "/" << day << "/" << year << endl;
    }

private:
    int month;     // 月
    int day;       // 日
    int year;      // 年
};

int main() {
    // 1. 两个正常日期
    Date nationalDay(10, 1, 2026);
    Date newYear(1, 1, 2027);

    cout << "National Day: ";
    nationalDay.displayDate();
    cout << "New Year:     ";
    newYear.displayDate();

    // 2. 月份故意填 15（不合法），会被自动改成 1
    Date invalidMonth(15, 8, 2026);
    cout << endl << "A date with month 15 becomes: ";
    invalidMonth.displayDate();

    // 3. 用 set 函数把日期改掉，再显示出来
    nationalDay.setMonth(12);
    nationalDay.setDay(25);
    nationalDay.setYear(2026);
    cout << endl << "After using the set functions: ";
    nationalDay.displayDate();

    // 4. 用 get 函数单独取出年月日
    cout << "Year of the first date: " << nationalDay.getYear() << endl;
    cout << "Month of the second date: " << newYear.getMonth() << endl;

    system("pause");
    return 0;
}