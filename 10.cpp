#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicSalary;
    float hra;    
    float da;    
    float pf;     
    float grossSalary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    
    void calculatePayroll() {
        hra = 0.20 * basicSalary; 
        da = 0.10 * basicSalary;
        pf = 0.05 * basicSalary;  
        grossSalary = basicSalary + hra + da - pf;
    }

    
    void display() {
        cout << "\n--- Employee Payroll ---\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << hra << endl;
        cout << "DA (10%): " << da << endl;
        cout << "PF (5%): " << pf << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;

    emp.input();          
    emp.calculatePayroll(); 
    emp.display();        

    return 0;
}
