#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator + (const Complex& obj) const {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
};
int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 4.2);
    cout << "First Complex number: ";
    c1.display();
 cout << "Second Complex number: ";
    c2.display();
    Complex c3 = c1 + c2;
cout << "\nResult after addition: ";
    c3.display();
return 0;
}
