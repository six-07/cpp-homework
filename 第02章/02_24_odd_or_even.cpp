// 题目 2.24（EASY）：判断奇数还是偶数
// 功能：读入一个整数，判断它是奇数还是偶数并输出结果。
#include <cstdlib>
#include <iostream>

int main() {
    int number = 0;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // 一个数除以 2 的余数是 0 就是偶数，否则是奇数。
    // 负数取余的结果是 0 或 -1，同样是 0 就代表偶数，所以负整数也能正确判断。
    if (number % 2 == 0) {
        std::cout << number << " is even." << std::endl;
    } else {
        std::cout << number << " is odd." << std::endl;
    }

    system("pause");
    return 0;
}
