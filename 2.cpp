#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name    : ";
        getline(cin, name);
        cout << "Enter Marks   : ";
        cin >> marks;
    }

    void showDetails() const {
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name   << endl;
        cout << "Marks   : " << marks  << endl;
    }
};

int main() {
    int n;
    cout << "How many students? ";
    cin >> n;

    Student *students = new Student[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        students[i].getDetails();
    }

    cout << "\n*** Student Information ***\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << (i + 1) << ":\n";
        students[i].showDetails();
    }
    delete[] students;
    return 0;
}
