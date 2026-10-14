// 题目 3.14：Employee 类
// 数据成员：名（string）、姓（string）、月薪（int，单位：元/月）
// 要求：
//   1. 构造函数用三个参数初始化数据成员
//   2. 每个数据成员都有 set 函数和 get 函数
//   3. 月薪不是正数时，一律设为 0
// 测试程序：建立两个 Employee 对象，显示各自年薪；每人涨薪 10% 后再显示一次。
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    // 构造函数：三个参数，分别初始化名、姓、月薪
    Employee(string firstNameValue, string lastNameValue, int monthlySalaryValue) {
        setFirstName(firstNameValue);
        setLastName(lastNameValue);
        setMonthlySalary(monthlySalaryValue);
    }

    void setFirstName(string firstNameValue) {
        firstName = firstNameValue;
    }

    string getFirstName() const {
        return firstName;
    }

    void setLastName(string lastNameValue) {
        lastName = lastNameValue;
    }

    string getLastName() const {
        return lastName;
    }

    // 月薪不是正数时设为 0
    void setMonthlySalary(int monthlySalaryValue) {
        if (monthlySalaryValue > 0) {
            monthlySalary = monthlySalaryValue;
        } else {
            monthlySalary = 0;
        }
    }

    int getMonthlySalary() const {
        return monthlySalary;
    }

private:
    string firstName;      // 名
    string lastName;       // 姓
    int monthlySalary;     // 月薪
};

int main() {
    Employee firstEmployee("Xin", "Liu", 4500);
    Employee secondEmployee("Ming", "Wang", 8000);

    // 1. 涨薪之前，先显示两个人各自的年薪
    int firstYearlySalary = firstEmployee.getMonthlySalary() * 12;
    int secondYearlySalary = secondEmployee.getMonthlySalary() * 12;

    cout << "=== Yearly salary before the raise ===" << endl;
    cout << "Employee 1: " << firstEmployee.getFirstName() << " " << firstEmployee.getLastName()
         << "  monthly " << firstEmployee.getMonthlySalary()
         << "  yearly " << firstYearlySalary << endl;
    cout << "Employee 2: " << secondEmployee.getFirstName() << " " << secondEmployee.getLastName()
         << "  monthly " << secondEmployee.getMonthlySalary()
         << "  yearly " << secondYearlySalary << endl;

    // 2. 每人涨薪 10%（整数运算：先乘 110 再除 100，不会丢精度）
    int firstNewMonthlySalary = firstEmployee.getMonthlySalary() * 110 / 100;
    int secondNewMonthlySalary = secondEmployee.getMonthlySalary() * 110 / 100;
    firstEmployee.setMonthlySalary(firstNewMonthlySalary);
    secondEmployee.setMonthlySalary(secondNewMonthlySalary);

    int firstNewYearlySalary = firstEmployee.getMonthlySalary() * 12;
    int secondNewYearlySalary = secondEmployee.getMonthlySalary() * 12;

    cout << endl << "=== Yearly salary after a 10% raise ===" << endl;
    cout << "Employee 1: " << firstEmployee.getFirstName() << " " << firstEmployee.getLastName()
         << "  monthly " << firstEmployee.getMonthlySalary()
         << "  yearly " << firstNewYearlySalary << endl;
    cout << "Employee 2: " << secondEmployee.getFirstName() << " " << secondEmployee.getLastName()
         << "  monthly " << secondEmployee.getMonthlySalary()
         << "  yearly " << secondNewYearlySalary << endl;

    // 3. 验证「月薪不是正数就设为 0」这条规则
    Employee invalidEmployee("Test", "Zero", -3000);
    cout << endl << "=== A non-positive salary becomes 0 ===" << endl;
    cout << "Employee 3: " << invalidEmployee.getFirstName() << " " << invalidEmployee.getLastName()
         << "  monthly " << invalidEmployee.getMonthlySalary()
         << "  yearly " << invalidEmployee.getMonthlySalary() * 12 << endl;

    system("pause");
    return 0;
}