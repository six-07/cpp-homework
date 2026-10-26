// 题目 5.5：Summing Integers
// 先读入整数个数，再使用 for 语句逐个读入这些整数并求和。
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int quantity = 0;
    int value = 0;
    int sum = 0;

    cout << "Enter the number of values to sum: ";
    while (!(cin >> quantity) || quantity < 0) {
        cout << "Please enter a non-negative integer: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Enter " << quantity << " integer value(s): ";
    for (int i = 0; i < quantity; ++i) {
        cin >> value;
        sum += value;
    }

    cout << "Sum = " << sum << endl;
    system("pause");
    return 0;
}
