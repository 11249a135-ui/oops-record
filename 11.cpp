#include <iostream>
using namespace std;
class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}
   void display() const {
        cout << "Value: " << value << endl;
    }
Number operator-() const {
        return Number(-value);
    }
 Number operator++() {
        ++value;
        return *this;
    }
Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }
};
int main() {
    Number n1(10);
cout << "Original ";
    n1.display();
Number n2 = -n1; 
cout << "After applying unary minus: ";
    n2.display();
    ++n1;
    cout << "After prefix increment: ";
    n1.display();
   n1++;
    cout << "After postfix increment: ";
    n1.display();
return 0;
}
