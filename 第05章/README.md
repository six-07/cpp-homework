# 第四次作业（第 5 章）

本目录收录《C++大学教程》第 5 章的四道编程题，所有程序均使用 C++11 编写。

| 题目 | 英文标题 | 中文内容 | 档级 | 手写备注 |
| --- | --- | --- | --- | --- |
| 5.5 | Summing Integers | 先读入数量，再用 for 循环求若干个整数之和 | EASY | 按 EASY 题要求，通常需要额外手写 |
| 5.20 | Pythagorean Triples | 用三重循环查找三边都不超过 500 的勾股数 | EASY | 按 EASY 题要求，通常需要额外手写 |
| 5.15 | GradeBook Modification | 修改 GradeBook 程序并计算平均绩点 | MEDIUM | 一般不需要额外手写 |
| 5.12 | Drawing Patterns with Nested for Loops | 用嵌套 for 循环绘制四个星号图案，并完成并排输出附加题 | MEDIUM | 一般不需要额外手写 |

## 编译与运行

在仓库根目录执行：

```powershell
g++ .\第05章\05_05_summing_integers.cpp -o .\build\05_05_summing_integers.exe -std=c++11 -Wall -Wextra -pedantic-errors
.\build\05_05_summing_integers.exe
```

其他三题只需替换源文件名和可执行文件名。

## 输入说明

- 5.5：例如输入 `5 100 200 300 400 500`，应得到 `Sum = 1500`。
- 5.15：输入若干字母等级，最后按 `Ctrl+Z` 再回车表示 EOF；A=4、B=3、C=2、D=1、F=0。
- 5.12：无需输入，直接运行。
- 5.20：无需输入，直接运行。

## 提交规范

后续章节统一按“题目翻译 → 思路梳理 → 代码展示 → 抄写备注”的形式讲解，并只把源码、说明和必要的运行材料提交到 GitHub。