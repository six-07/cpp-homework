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
echo   [1]  2.19  算术运算、最小值和最大值
echo   [2]  2.24  判断奇数还是偶数
echo   [3]  2.28  分离一个整数的各位数字
echo   [4]  2.30  身体质量指数 BMI 计算器
echo   [5]  3.05  阶乘计算（练习用）
echo.
echo   [0]  退出
echo.
set /p choice=请输入编号后按回车：

if "%choice%"=="1" call :run 02_19
if "%choice%"=="2" call :run 02_24
if "%choice%"=="3" call :run 02_28
if "%choice%"=="4" call :run 02_30
if "%choice%"=="5" call :run 03_05
if "%choice%"=="0" exit
goto menu

:run
cls
echo 正在运行 %1，请按提示输入数据...
echo --------------------------------------------
build\%1.exe
echo --------------------------------------------
echo.
echo 程序运行结束。按任意键返回菜单。
pause >nul
goto :eof