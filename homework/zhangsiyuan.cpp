#include <iostream>

using namespace std;

class Complex {
private:
    // 实部和虚部，题目要求私有
    double real;
    double imag;

public:
    // 构造函数，用于初始化复数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 重载减法运算符 '-' （作为类的成员函数）
    // 这里的 const 表示不会修改调用该函数的对象，& 表示传引用提高效率
    Complex operator-(const Complex& other) const {
        // 两个复数相减：(a+bi) - (c+di) = (a-c) + (b-d)i
        return Complex(this->real - other.real, this->imag - other.imag);
    }

    // 为了方便测试，写一个打印输出的函数
    void print() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};

int main() {
    // 测试代码
    Complex c1(5.0, 3.0); // 5 + 3i
    Complex c2(2.0, 1.0); // 2 + 1i
    
    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();
    
    // 执行减法运算
    Complex c3 = c1 - c2;
    
    cout << "c1 - c2 = ";
    c3.print();

    return 0;
}
