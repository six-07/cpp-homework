// 题目 2.19（EASY）：算术运算、最小值和最大值
// 功能：输入三个整数，显示它们的和、平均值、乘积、最小值和最大值。
#include <iostream>

int main() {
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

    std::cout << "Enter three integers separated by spaces: ";
    std::cin >> number1 >> number2 >> number3;

    int sum = number1 + number2 + number3;        // 三个数的和
    int product = number1 * number2 * number3;    // 三个数的乘积

    // 平均值可能带小数：先把和转成 double 再除以 3，否则整数除法会丢掉小数部分
    double average = static_cast<double>(sum) / 3.0;

    // 依次比较，找出最小值
    int smallest = number1;
    if (number2 < smallest) {
        smallest = number2;
    }
    if (number3 < smallest) {
        smallest = number3;
    }

    // 依次比较，找出最大值
    int largest = number1;
    if (number2 > largest) {
        largest = number2;
    }
    if (number3 > largest) {
        largest = number3;
    }

    std::cout << "\nSum is " << sum << std::endl;
    std::cout << "Average is " << average << std::endl;
    std::cout << "Product is " << product << std::endl;
    std::cout << "Smallest is " << smallest << std::endl;
    std::cout << "Largest is " << largest << std::endl;

    return 0;
}