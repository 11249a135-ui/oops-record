#include <iostream>
using namespace std;
class Demo {
private:
    int value;
public:
    Demo(int v) {
        value = v;
        cout << "Constructor called! Value initialized to " << value << endl;
    }
~Demo() {
        cout << "Destructor called! Value was " << value << endl;
    }
void display() {
        cout << "Value: " << value << endl;
    }
};
int main() {
    cout << "Creating object d1..." << endl;
    Demo d1(10); 
d1.display();
cout << "Creating another object d2..." << endl;
    Demo d2(20); 
 d2.display(); 
     cout << "End of main function" << endl;
    return 0;
}
