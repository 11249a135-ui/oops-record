#include <iostream>
using namespace std;
class Number {
    int x;  
public:
    Number(int val = 0) {
        x = val;
    }
    void display() {
        cout << "Value of x: " << x << endl;
    }
    Number operator-() {
        Number temp;
        temp.x = -x;  
        return temp;
    }
     Number operator++() {
        ++x;        
        return *this; 
    }
     Number operator--(int) {
        Number temp = *this; 
        x--;                 
        return temp;        
    }
};

int main() {
    Number n1(10), n2;

    cout << "Original ";
    n1.display();

    n2 = -n1;
    cout << "After applying unary minus: ";
    n2.display();

    ++n1;
    cout << "After prefix increment (++n1): ";
    n1.display();
    n1--;
    cout << "After postfix decrement (n1--): ";
    n1.display();

    return 0;
}
