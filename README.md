# C++ 作业

《C++大学教程》第九版（C++ How to Program）课后编程题，用 Git 记录每一步。

仓库地址：https://github.com/six-07/cpp-homework

## 文件夹里有什么

| 文件夹 / 文件 | 内容 |
| --- | --- |
| `第02章/` | 第二章作业：2.19、2.24、2.28、2.30 |
| `第03章/` | 第三章作业：3.11、3.14、3.15，另外还有一道阶乘练习 |
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

其中 2.19、2.24 和 3.15 是 EASY，除了跑通之外还要在 A4 白纸上手写一遍。

## 怎么编译运行

用 g++（MSYS2 UCRT64 环境，装在 `C:\msys64\ucrt64`），在仓库根目录：

```powershell
g++ .\第03章\03_15_date_class.cpp -o .\build\03_15_date_class.exe -std=c++11 -Wall -static
.\build\03_15_date_class.exe
```

把文件名换成别的题目就能编译其他几题。`-static` 会让 exe 自带运行库，双击也能跑。

也可以直接在 Visual Studio 里打开 `.cpp` 文件，按 Ctrl+F5 运行。

## 提交习惯

每写完一题提交一次，说明写清楚做了什么：

```powershell
git add .
git commit -m "完成第3章 3.15 Date 类"
git push
```