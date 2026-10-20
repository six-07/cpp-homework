# 4.15 Sales Commission Calculator：伪代码与自上而下逐步细化

## 顶层算法

1. 初始化固定工资和提成比例。
2. 读取一名销售员的周销售额。
3. 当输入不是结束标志 `-1` 时，重复：
   1. 计算该销售员的周工资。
   2. 显示周工资。
   3. 读取下一名销售员的周销售额。
4. 结束程序。

## 第一次细化

```text
SET baseSalary = 200.00
SET commissionRate = 0.09

DISPLAY "Enter sales in dollars (-1 to end): "
INPUT grossSales

WHILE grossSales != -1
    SET salary = baseSalary + grossSales * commissionRate
    DISPLAY "Salary is: $", salary
    DISPLAY "Enter sales in dollars (-1 to end): "
    INPUT grossSales
ENDWHILE
```

## 第二次细化（补充输入有效性检查）

```text
SET baseSalary = 200.00
SET commissionRate = 0.09

DISPLAY "Enter sales in dollars (-1 to end): "
INPUT grossSales

WHILE input is valid AND grossSales != -1
    IF grossSales >= 0 THEN
        SET salary = baseSalary + grossSales * commissionRate
        DISPLAY "Salary is: $", salary with 2 decimal places
    ELSE
        DISPLAY "Sales cannot be negative."
    ENDIF

    DISPLAY "Enter sales in dollars (-1 to end): "
    INPUT grossSales
ENDWHILE
```

## 算法说明

- `-1` 是哨兵值，只表示停止输入，不参与工资计算。
- 每处理一名销售员，程序都会再次提示并读取销售额。
- 工资公式为：`200 + 0.09 × grossSales`。
- 显示金额时保留两位小数，例如销售额为 `5000` 时，工资为 `$650.00`。
