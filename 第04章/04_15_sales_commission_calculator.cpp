// 题目 4.15：Sales Commission Calculator
// 每名销售员每周固定工资 200 美元，另加当周销售额的 9%。
// 程序使用 while 语句一次处理一名销售员的销售额，输入 -1 时结束。
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    const double BASE_SALARY = 200.0;    // 每周固定工资
    const double COMMISSION_RATE = 0.09; // 销售提成比例
    double grossSales = 0.0;

    cout << fixed << setprecision(2);
    cout << "Enter sales in dollars (-1 to end): ";

    // 读取成功且没有输入结束标志时，继续处理下一名销售员
    while (cin >> grossSales && grossSales != -1.0) {
        if (grossSales < 0.0) {
            cout << "Sales cannot be negative." << endl;
        } else {
            double salary = BASE_SALARY + grossSales * COMMISSION_RATE;
            cout << "Salary is: $" << salary << endl;
        }

        cout << endl << "Enter sales in dollars (-1 to end): ";
    }

    cout << endl;
    return 0;
}
