// 题目 5.12：Drawing Patterns with Nested for Loops
// 先按题目要求把四个图案分开纵向输出；
// 再完成 Extra Credit：在同一行的四个列中并排输出四个图案。
#include <iostream>
using namespace std;

const int SIZE = 10;
const int COLUMN_WIDTH = 12;

void printStars(int count) {
    for (int i = 0; i < count; ++i) {
        cout << '*';
    }
}

void printSpaces(int count) {
    for (int i = 0; i < count; ++i) {
        cout << ' ';
    }
}

void printPatternA() {
    for (int row = 1; row <= SIZE; ++row) {
        printStars(row);
        cout << endl;
    }
}

void printPatternB() {
    for (int row = 1; row <= SIZE; ++row) {
        printStars(SIZE - row + 1);
        cout << endl;
    }
}

void printPatternC() {
    for (int row = 1; row <= SIZE; ++row) {
        printSpaces(row - 1);
        printStars(SIZE - row + 1);
        cout << endl;
    }
}

void printPatternD() {
    for (int row = 1; row <= SIZE; ++row) {
        printSpaces(SIZE - row);
        printStars(row);
        cout << endl;
    }
}

void printPatternsSideBySide() {
    cout << "(a)         (b)         (c)         (d)" << endl;

    for (int row = 1; row <= SIZE; ++row) {
        // (a)：左边对齐，共 row 个星号
        printStars(row);
        printSpaces(COLUMN_WIDTH - row);

        // (b)：左边对齐，共 SIZE - row + 1 个星号
        printStars(SIZE - row + 1);
        printSpaces(COLUMN_WIDTH - (SIZE - row + 1));

        // (c)：右对齐，共 SIZE - row + 1 个星号
        printSpaces(COLUMN_WIDTH - (SIZE - row + 1));
        printStars(SIZE - row + 1);

        // (d)：右对齐，共 row 个星号
        printSpaces(COLUMN_WIDTH - row);
        printStars(row);

        cout << endl;
    }
}

int main() {
    cout << "(a)" << endl;
    printPatternA();

    cout << "\n(b)" << endl;
    printPatternB();

    cout << "\n(c)" << endl;
    printPatternC();

    cout << "\n(d)" << endl;
    printPatternD();

    cout << "\nExtra credit: all four patterns side by side" << endl;
    printPatternsSideBySide();

    return 0;
}