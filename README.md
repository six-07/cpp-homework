# C++ 作业

《C++大学教程》第九版（C++ How to Program）课后编程题，用 Git / GitHub 做版本管理。

仓库地址：https://github.com/six-07/cpp-homework

## 目录结构

| 路径 | 内容 |
| --- | --- |
| `第02章/` | 第二章作业：2.19、2.24、2.28、2.30 |
| `第03章/` | 第三章作业：3.11、3.14、3.15（另有练习 `03_05_factorial.cpp`） |
| `build/` | 编译生成的 exe（已被 .gitignore 忽略，不会上传） |
| `运行程序.bat` | 双击就能选一道题来运行（自动用 build 里的 exe） |
| `Git使用手册.md` | 从零开始的提交/推送步骤 |
| `.gitignore` | 忽略 exe、o 等编译产物，只上传源代码 |

## 第二章作业清单

| 题目 | 难度 | 源文件 | 提交要求 |
| --- | --- | --- | --- |
| 2.19 算术运算、最小值和最大值 | EASY | `第02章/02_19_arithmetic_smallest_largest.cpp` | 需另在 A4 纸手写 |
| 2.24 判断奇数还是偶数 | EASY | `第02章/02_24_odd_or_even.cpp` | 需另在 A4 纸手写 |
| 2.28 分离一个整数的各位数字 | MEDIUM | `第02章/02_28_digits_of_an_integer.cpp` | 跑通即可 |
| 2.30 身体质量指数计算器 | MEDIUM | `第02章/02_30_bmi_calculator.cpp` | 跑通即可 |

## 第三章作业清单

| 题目 | 内容 | 源文件 | 提交要求 |
| --- | --- | --- | --- |
| 3.11 | 修改 GradeBook 类（增加教师姓名） | `第03章/03_11_modifying_gradebook.cpp` | 跑通即可 |
| 3.14 | Employee 类（姓名、月薪、年薪、涨薪） | `第03章/03_14_employee_class.cpp` | 跑通即可 |
| 3.15 | Date 类（月份合法性检查、显示日期） | `第03章/03_15_date_class.cpp` | EASY，需另在 A4 纸手写一遍 |

第三章三道题都按「每个数据成员都有 set / get 函数」的要求写，并且刻意只用了 C++11 的语法（课程要求第九版课本的 C++11）。变量名一律取成见名知意的形式，例如 `monthlySalary`、`yearlySalary`、`courseName`、`instructorName`，方便阅读和批改。

## 编译运行

使用 g++（MSYS2 UCRT64 环境，已装在 `C:\msys64\ucrt64`），在仓库根目录执行：

```powershell
g++ .\第03章\03_15_date_class.cpp -o .\build\03_15_date_class.exe -std=c++11 -Wall -static
.\build\03_15_date_class.exe
```

把文件名换成对应的题目即可编译其他几题。`-static` 的作用是把运行库打包进 exe，生成的文件大一些（约 2.6 MB），但可以脱离开发环境直接双击运行，交作业更方便。

也可以直接在 Visual Studio 里新建项目、把 `.cpp` 的内容粘进去后按 F5 运行。

## 提交记录规范

每完成一题就提交一次，说明写清楚做了什么：

```powershell
git add .
git commit -m "完成第3章 3.15 Date 类"
git push
```