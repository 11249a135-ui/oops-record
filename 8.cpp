#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }
 void display() {
        cout << real << " + " << imag << "i" << endl;
    }
Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp; 
    }
};
int main() {
    Complex c1, c2, sum;
 cout << "Enter first complex number:\n";
    c1.input();
 cout << "Enter second complex number:\n";
    c2.input();
    sum = c1.add(c2);
    cout << "Sum of complex numbers: ";
    sum.display();
 return 0;
}
