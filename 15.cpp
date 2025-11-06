#include <iostream>
using namespace std;

class Student {
    int feet;
    int inches;

public:
    Student(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
int toInches() const {
        return feet * 12 + inches;
    }
 bool operator==(const Student& s) const {
        return toInches() == s.toInches();
    }
bool operator>(const Student& s) const {
        return toInches() > s.toInches();
    }
bool operator<(const Student& s) const {
        return toInches() < s.toInches();
    }
};
int main() {
    Student s1(5, 8); 
    Student s2(6, 1); 
cout << "Height of Student 1: ";
    s1.display();
    cout << "Height of Student 2: ";
    s2.display();
    cout << endl;
 if (s1 == s2)
        cout << "Both students have the same height." << endl;
    else if (s1 > s2)
        cout << "Student 1 is taller than Student 2." << endl;
    else
        cout << "Student 1 is shorter than Student 2." << endl;
return 0;
}

