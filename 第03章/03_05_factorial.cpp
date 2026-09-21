// 练习题目：计算阶乘
// 功能：输入一个非负整数 n，计算并输出 n 的阶乘（n!）。
#include <iostream>

int main() {
    int n = 0;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    // 阶乘对负数没有定义，先做检查
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    // 用循环把 1 到 n 依次乘起来
    unsigned long long factorial = 1;
    for (int i = 2; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << n << "! = " << factorial << std::endl;

    return 0;
}