// 题目 2.30：身体质量指数（BMI）计算器
// 功能：输入体重（公斤）和身高（米），计算并显示 BMI，同时给出 BMI 评价标准。
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double weight = 0.0;    // 体重，单位：公斤
    double height = 0.0;    // 身高，单位：米

    cout << "Input your weight in kilograms:" << endl;
    cin >> weight;

    cout << "Input your height in meters (e.g. 1.63, not 163):" << endl;
    cin >> height;

    // BMI 公式：体重 ÷ 身高 的平方
    double bmi = weight / (height * height);

    // fixed + setprecision(1)：让结果只保留一位小数
    cout << "\nYour BMI is " << fixed << setprecision(1) << bmi << endl;

    // 美国卫生与公众服务部 / 国立卫生研究院的 BMI 评价标准
    cout << "\nBMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;

    system("pause");
    return 0;
}