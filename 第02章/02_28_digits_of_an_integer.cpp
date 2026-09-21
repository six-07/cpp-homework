// 题目 2.28（MEDIUM）：分离一个整数的各位数字
// 功能：输入一个五位整数，把它拆成五个单独的数字，数字之间空三个空格显示。
#include <iostream>

int main() {
    int number = 0;

    std::cout << "Enter a five-digit integer: ";
    std::cin >> number;

    // 拆位思路：整除（/）用来丢掉低位数字，取余（%）用来保留末尾数字。
    int digit1 = number / 10000;        // 万位
    int digit2 = number / 1000 % 10;    // 千位
    int digit3 = number / 100 % 10;     // 百位
    int digit4 = number / 10 % 10;      // 十位
    int digit5 = number % 10;           // 个位

    std::cout << digit1 << "   " << digit2 << "   " << digit3 << "   "
              << digit4 << "   " << digit5 << std::endl;

    return 0;
}