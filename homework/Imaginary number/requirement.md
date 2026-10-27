定义一个复数类 Complex，包含实部和虚部两个私有成员，并重载减法运算符 -，实现两个复数的减法运算。(类下节课会讲，可自学)
#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
 
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    Complex operator-(const Complex& other) const {
        ：(a+bi) - (c+di) = (a-c) + (b-d)i
        return Complex(this->real - other.real, this->imag - other.imag);
    }
    void print() const {
        if (imag >= 0) {
            cout << real << " + " << imag << "i" << endl;
        } else {
            cout << real << " - " << -imag << "i" << endl;
        }
    }
};

int main() {
    Complex c1(5.0, 3.0); // 5 + 3i
    Complex c2(2.0, 1.0); // 2 + 1i
    cout << "c1 = ";
    c1.print();
    cout << "c2 = ";
    c2.print();
    Complex c3 = c1 - c2;
    cout << "c1 - c2 = ";
    c3.print();

    return 0;
}
