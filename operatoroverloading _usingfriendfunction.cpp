#include<iostream>
using namespace std;
class Complex {
private:
	float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }
    friend Complex operator + (const Complex& obj1,const Complex& obj2);
    friend Complex operator - (const Complex& obj1,const Complex& obj2);
    friend Complex operator * (const Complex& obj1,const Complex& obj2);
    friend Complex operator / (const Complex& obj1,const Complex& obj2);
    void output() {
        
            cout << "Output Complex number: " << real << imag << "i"<<endl;
        
    }
};
Complex operator + (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real + obj2.real;
        temp.imag = obj1.imag + obj2.imag;
        return temp;
}
Complex operator - (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real - obj2.real;
        temp.imag = obj1.imag - obj2.imag;
        return temp;
}
Complex operator * (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real * obj2.real;
        temp.imag = obj1.imag * obj2.imag;
        return temp;
}
Complex operator / (const Complex& obj1,const Complex& obj2) {
        Complex temp;
        temp.real = obj1.real / obj2.real;
        temp.imag = obj1.imag / obj2.imag;
        return temp;
}
int main() {
    Complex complex1, complex2,complex3, result;
    cout << "Enter first complex number:\n";
    complex1.input();
    cout << "Enter second complex number:\n";
    complex2.input();
    cout << "Enter third complex number:\n";
    complex3.input();
//    complex2 = complex1(10, 15, 20); // invoke operator()
//    complex1.output();
//    complex2.output();
    //result = complex1 + complex2;
   result = complex1 + complex2+ complex3;//(c1.operator +(c2)).operator +(c3);
  result.output();
}
