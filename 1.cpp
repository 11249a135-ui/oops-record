#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;
public:

    Student(int sid, const string &sname, float smarks)
        : id(sid), name(sname), marks(smarks) {}


    void displayInfo() const {
        cout << "Student ID   : " << id   << endl;
        cout << "Student Name : " << name << endl;
        cout << "Marks        : " << marks << endl;
    }
};

int main() {
    
    Student stu(101, "Alice Kumar", 88.5f);

    
    stu.displayInfo();

    return 0;
}