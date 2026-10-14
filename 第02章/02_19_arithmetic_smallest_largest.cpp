// 算术运算：求三个整数的和、平均值、乘积、最小值、最大值
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    cout << "Input three different integers:" << endl;
    cin >> number1 >> number2 >> number3;

    // 必须等输入完成后才能计算，否则算的都是初始值 0
    int sum = number1 + number2 + number3;
    int product = number1 * number2 * number3;

    // 平均值可能带小数，所以用 double：先强制转换成小数再除以 3
    double average = static_cast<double>(sum) / 3.0;

    // 找最小值：谁比当前最小值还小，就把最小值换成谁
    int smallest = number1;
    if (number2 < smallest) {
        smallest = number2;
    }
    if (number3 < smallest) {
        smallest = number3;
    }

    // 找最大值：同理
    int largest = number1;
    if (number2 > largest) {
        largest = number2;
    }
    if (number3 > largest) {
        largest = number3;
    }

    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << average << endl;
    cout << "Product is: " << product << endl;
    cout << "Smallest is: " << smallest << endl;
    cout << "Largest is: " << largest << endl;

    system("pause");
    return 0;
}