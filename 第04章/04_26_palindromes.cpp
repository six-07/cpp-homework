// 题目 4.26：Palindromes
// 读入一个五位整数，用除法和取余分离各位数字，
// 判断它从前往后和从后往前读是否相同。
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int number = 0;

    cout << "Enter a five-digit integer: ";
    while (!(cin >> number) || number < 10000 || number > 99999) {
        cout << "Please enter a five-digit integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // 例如 12321 的各位数字依次为 1、2、3、2、1
    int firstDigit = number / 10000;
    int secondDigit = number / 1000 % 10;
    int thirdDigit = number / 100 % 10;
    int fourthDigit = number / 10 % 10;
    int fifthDigit = number % 10;

    cout << "The digits are: " << firstDigit << ' ' << secondDigit << ' '
         << thirdDigit << ' ' << fourthDigit << ' ' << fifthDigit << endl;

    if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
