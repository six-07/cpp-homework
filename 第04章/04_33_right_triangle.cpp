// 题目 4.33：Sides of a Right Triangle
// 读入三个非零整数，判断它们能否作为直角三角形的三条边。
// 判据：最长边的平方等于另外两条边的平方和。
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    cout << "Enter three nonzero integers: ";
    cin >> side1 >> side2 >> side3;

    if (!cin || side1 == 0 || side2 == 0 || side3 == 0) {
        cout << "All three sides must be nonzero integers." << endl;
        system("pause");
        return 0;
    }

    // 先转换为 long long，避免平方运算时 int 溢出
    long long a = side1;
    long long b = side2;
    long long c = side3;

    long long aSquared = a * a;
    long long bSquared = b * b;
    long long cSquared = c * c;
    bool isRightTriangle = false;

    // 分别假设 a、b、c 是最长边，再用勾股定理判断
    if (aSquared >= bSquared && aSquared >= cSquared) {
        isRightTriangle = aSquared == bSquared + cSquared;
    } else if (bSquared >= aSquared && bSquared >= cSquared) {
        isRightTriangle = bSquared == aSquared + cSquared;
    } else {
        isRightTriangle = cSquared == aSquared + bSquared;
    }

    if (isRightTriangle) {
        cout << side1 << ", " << side2 << ", and " << side3
             << " are the sides of a right triangle." << endl;
    } else {
        cout << side1 << ", " << side2 << ", and " << side3
             << " are not the sides of a right triangle." << endl;
    }

    system("pause");
    return 0;
}
