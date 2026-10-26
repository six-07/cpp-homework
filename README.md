# C++ 作业

《C++大学教程》第九版（C++ How to Program）课后编程题，用 Git 记录每一步。

仓库地址：https://github.com/six-07/cpp-homework

## 文件夹里有什么

| 文件夹 / 文件 | 内容 |
| --- | --- |
| `第02章/` | 第二章作业：2.19、2.24、2.28、2.30 |
| `第03章/` | 第三章作业：3.11、3.14、3.15，另外还有一道阶乘练习 |
| `第04章/` | 第三次作业：4.15、4.26、4.27、4.33 |
| `第05章/` | 第四次作业：5.5、5.12、5.15、5.20 |
| `build/` | 编译出来的 exe（编译产物，不提交） |
| `运行程序.bat` | 双击后选编号就能运行做好的题目 |
| `Git使用手册.md` | 自己整理的 Git 常用命令，忘了就翻一下 |
| `.gitignore` | 忽略 exe 等编译产物，只传源代码 |

## 作业清单

| 题目 | 内容 | 源文件 |
| --- | --- | --- |
| 2.19 | 算术运算、最小值和最大值 | `第02章/02_19_arithmetic_smallest_largest.cpp` |
| 2.24 | 判断奇数还是偶数 | `第02章/02_24_odd_or_even.cpp` |
| 2.28 | 分离一个整数的各位数字 | `第02章/02_28_digits_of_an_integer.cpp` |
| 2.30 | 身体质量指数 BMI 计算器 | `第02章/02_30_bmi_calculator.cpp` |
| 3.11 | 修改 GradeBook 类 | `第03章/03_11_modifying_gradebook.cpp` |
| 3.14 | Employee 类 | `第03章/03_14_employee_class.cpp` |
| 3.15 | Date 类 | `第03章/03_15_date_class.cpp` |
| 4.15 | 销售提成工资计算器 | `第04章/04_15_sales_commission_calculator.cpp` |
| 4.26 | 判断五位回文数 | `第04章/04_26_palindromes.cpp` |
| 4.27 | 二进制数转十进制数 | `第04章/04_27_binary_to_decimal.cpp` |
| 4.33 | 判断直角三角形的三条边 | `第04章/04_33_right_triangle.cpp` |
| 5.5 | 使用 for 循环求若干整数之和 | `第05章/05_05_summing_integers.cpp` |
| 5.12 | 使用嵌套 for 循环绘制四个图案 | `第05章/05_12_drawing_patterns.cpp` |
| 5.15 | 修改 GradeBook，计算平均绩点 | `第05章/05_15_gradebook_grade_point_average.cpp` |
| 5.20 | 查找 500 以内的勾股数 | `第05章/05_20_pythagorean_triples.cpp` |

其中 EASY 题除了跑通之外，通常还需要在 A4 白纸上手写一遍。当前已标注的 EASY 题有 2.19、2.24、3.15、5.5 和 5.20；最终以任课教师要求为准。

## 怎么编译运行

用 g++（MSYS2 UCRT64 环境，装在 `C:\msys64\ucrt64`），在仓库根目录：

```powershell
g++ .\第04章\04_15_sales_commission_calculator.cpp -o .\build\04_15_sales_commission_calculator.exe -std=c++11 -Wall -static
.\build\04_15_sales_commission_calculator.exe
```

把文件名换成别的题目就能编译其他几题。`-static` 会让 exe 自带运行库，双击也能跑。

也可以在 Visual Studio 中分别打开第四章的 `.cpp` 文件，按 Ctrl+F5 运行。

## 提交习惯

每写完一题提交一次，说明写清楚做了什么：

```powershell
git add .
git commit -m "完成第4章 4.15 销售提成工资计算器"
git push
```
