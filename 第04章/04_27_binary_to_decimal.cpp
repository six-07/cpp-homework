// 题目 4.27：Printing the Decimal Equivalent of a Binary Number
// 读入一个只含 0 和 1 的整数，利用取余和整除从右向左取出每一位，
// 按二进制位权累加，得到对应的十进制数。
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int binaryNumber = 0;
    int temp = 0;
    int digit = 0;
    int placeValue = 1;       // 当前二进制位的十进制位权：1、2、4、8……
    int decimalValue = 0;
    bool validBinary = true;

    cout << "Enter a binary integer (only 0 and 1): ";
    cin >> binaryNumber;

    if (!cin || binaryNumber < 0) {
        validBinary = false;
    } else {
        temp = binaryNumber;

        do {
            digit = temp % 10;

            if (digit != 0 && digit != 1) {
                validBinary = false;
                break;
            }

            decimalValue += digit * placeValue;
            placeValue *= 2;
            temp /= 10;
        } while (temp != 0);
    }

    if (validBinary) {
        cout << "The decimal equivalent of " << binaryNumber
             << " is " << decimalValue << endl;
    } else {
        cout << "Invalid input: the number may contain only 0 and 1." << endl;
    }

    system("pause");
    return 0;
}
