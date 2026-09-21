# C++ 作业

《C++大学教程》第九版（C++ How to Program）课后编程题，用 Git / GitHub 做版本管理。

## 目录结构

| 路径 | 内容 |
| --- | --- |
| `第02章/` | 第二章作业：2.19、2.24、2.28、2.30 |
| `build/` | 编译生成的 exe（已被 .gitignore 忽略，不会上传） |
| `.gitignore` | 忽略 exe、o 等编译产物，只上传源代码 |

## 第二章作业清单

| 题目 | 难度 | 源文件 | 提交要求 |
| --- | --- | --- | --- |
| 2.19 算术运算、最小值和最大值 | EASY | `第02章/02_19_arithmetic_smallest_largest.cpp` | 需另在 A4 纸手写 |
| 2.24 判断奇数还是偶数 | EASY | `第02章/02_24_odd_or_even.cpp` | 需另在 A4 纸手写 |
| 2.28 分离一个整数的各位数字 | MEDIUM | `第02章/02_28_digits_of_an_integer.cpp` | 跑通即可 |
| 2.30 身体质量指数计算器 | MEDIUM | `第02章/02_30_bmi_calculator.cpp` | 跑通即可 |

提交到课程系统的格式：代码 + 手写照片 + 运行截图。

## 编译运行

使用 g++（MSYS2 UCRT64 环境，已装在 `C:\msys64\ucrt64`），在仓库根目录执行：

```powershell
g++ .\第02章\02_19_arithmetic_smallest_largest.cpp -o .\build\02_19.exe -std=c++17 -Wall -static
.\build\02_19.exe
```

把文件名换成对应的题目即可编译其他三题。

`-static` 的作用是把运行库打包进 exe，生成的文件大一些（约 2.6 MB），但可以脱离开发环境直接双击运行，交作业更方便。

## 提交记录规范

每完成一题就提交一次，说明写清楚做了什么：

```powershell
git add .
git commit -m "完成第2章 2.19 算术运算与最值"
git push
```