#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    friend Complex addComplex(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex num1(3, 4), num2(5, 2);

    cout << "Number 1: ";
    num1.display();

    cout << "Number 2: ";
    num2.display();

    Complex sum = addComplex(num1, num2);

    cout << "Sum: ";
    sum.display();

    return 0;
}