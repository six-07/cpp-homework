@echo off
chcp 65001 >nul
cd /d "%~dp0"
title C++ 作业 - 运行程序

:menu
cls
echo ============================================
echo            C++ 作业运行工具
echo ============================================
echo.
echo   ---- 第二章 ----
echo   [1]  2.19  算术运算、最小值和最大值
echo   [2]  2.24  判断奇数还是偶数
echo   [3]  2.28  分离一个整数的各位数字
echo   [4]  2.30  身体质量指数 BMI 计算器
echo.
echo   ---- 第三章 ----
echo   [5]  3.11  修改 GradeBook 类（教师姓名）
echo   [6]  3.14  Employee 类（月薪与年薪）
echo   [7]  3.15  Date 类（日期合法性）
echo   [8]  3.05  阶乘计算（练习用）
echo.
echo   ---- 第四章 ----
echo   [9]  4.15  Sales Commission Calculator
echo   [10] 4.26  Palindromes
echo   [11] 4.27  Binary to Decimal
echo   [12] 4.33  Sides of a Right Triangle
echo.
echo   [0]  退出
echo.
set /p choice=请输入编号后按回车：

if "%choice%"=="1" call :run 02_19_arithmetic_smallest_largest
if "%choice%"=="2" call :run 02_24_odd_or_even
if "%choice%"=="3" call :run 02_28_digits_of_an_integer
if "%choice%"=="4" call :run 02_30_bmi_calculator
if "%choice%"=="5" call :run 03_11_modifying_gradebook
if "%choice%"=="6" call :run 03_14_employee_class
if "%choice%"=="7" call :run 03_15_date_class
if "%choice%"=="8" call :run 03_05_factorial
if "%choice%"=="9" call :run 04_15_sales_commission_calculator
if "%choice%"=="10" call :run 04_26_palindromes
if "%choice%"=="11" call :run 04_27_binary_to_decimal
if "%choice%"=="12" call :run 04_33_right_triangle
if "%choice%"=="0" exit
goto menu

:run
cls
if not exist "build\%1.exe" (
  echo 找不到 build\%1.exe，请先编译这一题。
  echo.
  echo 按任意键返回菜单。
  pause >nul
  goto :eof
)
echo 正在运行 %1，请按提示输入数据...
echo --------------------------------------------
build\%1.exe
echo --------------------------------------------
echo.
echo 程序运行结束。按任意键返回菜单。
pause >nul
goto :eof
