// 题目 2.30（MEDIUM）：身体质量指数（BMI）计算器
// 功能：输入体重（公斤）与身高（米），计算 BMI，并显示 BMI 评价标准。
#include <iomanip>
#include <iostream>

int main() {
    double weightInKilograms = 0.0;
    double heightInMeters = 0.0;

    std::cout << "Enter your weight in kilograms: ";
    std::cin >> weightInKilograms;

    std::cout << "Enter your height in meters: ";
    std::cin >> heightInMeters;

    // 计算公式：BMI = 体重(公斤) / 身高(米)的平方
    double bmi = weightInKilograms / (heightInMeters * heightInMeters);

    // fixed + setprecision(1) 让结果只保留一位小数，便于阅读
    std::cout << "\nYour BMI is "
              << std::fixed << std::setprecision(1) << bmi << std::endl;

    // 美国卫生与公众服务部 / 国立卫生研究院给出的 BMI 判断标准
    std::cout << "\nBMI VALUES\n"
              << "Underweight: less than 18.5\n"
              << "Normal:      between 18.5 and 24.9\n"
              << "Overweight:  between 25 and 29.9\n"
              << "Obese:       30 or greater"
              << std::endl;

    return 0;
}