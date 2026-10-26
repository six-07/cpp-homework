// 题目 5.20：Pythagorean Triples
// 使用三重循环枚举三条边，找出所有 a^2 + b^2 = c^2 且三边均不超过 500 的组合。
// 限定 side1 < side2 < hypotenuse，避免交换两条直角边后重复输出。
#include <iostream>
using namespace std;

int main() {
    const int LIMIT = 500;
    int tripleCount = 0;

    cout << "Pythagorean triples with all sides no larger than "
         << LIMIT << ":" << endl;

    for (int side1 = 1; side1 <= LIMIT; ++side1) {
        for (int side2 = 1; side2 <= LIMIT; ++side2) {
            for (int hypotenuse = 1; hypotenuse <= LIMIT; ++hypotenuse) {
                if (side1 < side2 && side2 < hypotenuse &&
                    side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    ++tripleCount;
                    cout << side1 << ", " << side2 << ", " << hypotenuse << endl;
                }
            }
        }
    }

    cout << "Total: " << tripleCount << " triples." << endl;
    return 0;
}