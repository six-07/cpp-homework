// 题目 2.28：分离一个整数的各位数字
// 功能：输入一个五位整数，把它拆成五个单独的数字，数字之间空三个空格显示。
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int number = 0;

    cout << "Input a five-digit integer:" << endl;
    cin >> number;

    // 拆位口诀：
    //   整除 / 用来"丢掉低位"——45320 / 10000 = 4（把后面四位全砍掉）
    //   取余 % 用来"保留低位"——45320 % 10 = 0（只留最后一位）
    int digit1 = number / 10000;        // 万位
    int digit2 = number / 1000 % 10;    // 千位：先砍掉后三位得 45，再留末位得 5
    int digit3 = number / 100 % 10;     // 百位
    int digit4 = number / 10 % 10;      // 十位
    int digit5 = number % 10;           // 个位

    cout << digit1 << "   " << digit2 << "   " << digit3 << "   "
         << digit4 << "   " << digit5 << endl;

    system("pause");
    return 0;
}