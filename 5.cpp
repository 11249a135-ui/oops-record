#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class ElectricBill {
private:
    int consumerNo;
    string consumerName;
    int prevReading;
    int currReading;
    char connection;
    double amount;
public:
    void inputDetails() {
        cout<< "Enter Consumer No          : ";
        cin>>consumerNo;
        cout<< "Enter Consumer Name        : ";
        getline(cin, consumerName);
        cout<< "Enter Previous Month Reading (units) : ";
        cin>> prevReading;
        cout<< "Enter Current Month Reading (units)   : ";
        cin>>currReading;
        }
    void calculateBill() {
        int units = currReading - prevReading;
        if (units < 0) units = 0; 
        double charge = 0.0;
        {
            if (units <= 100) {
                charge = units * 1.00;
            } else if (units <= 200) {
                charge = 100 * 1.00 + (units - 100) * 2.50;
            } else {
                charge = 100 * 1.00 + 100 * 2.50 + (units - 200) * 4.00;
            }
        if (units <= 100) {
                charge = units * 2.00;
            } else if (units <= 200) {
                charge = 100 * 2.00 + (units - 100) * 4.50;
            } else {
                charge = 100 * 2.00 + 100 * 4.50 + (units - 200) * 6.50;
            }
         cout << "Unknown connection type — assuming domestic.\n";
            if (units <= 100) {
                charge = units * 1.00;
            } else if (units <= 200) {
                charge = 100 * 1.00 + (units - 100) * 2.50;
            } else {
                charge = 100 * 1.00 + 100 * 2.50 + (units - 200) * 4.00;
            }
        }
        if (charge > 300) {
            charge += charge * 0.15;  
        }
        amount = charge;
    }
    void printBill() const {
        cout<< fixed << setprecision(2);
        cout<< "\n—————— ELECTRICITY BILL ——————\n";
        cout<< "Consumer No         : " <<consumerNo << "\n";
        cout<< "Consumer Name       : " <<consumerName << "\n";
        cout<< "Previous Reading    : " <<prevReading << " units\n";
        cout<< "Current Reading     : " <<currReading << " units\n";
        cout<< "Amount to Pay       : Rs. " << amount << "\n";
        cout<< "———————————— End of Bill ————————————\n";
    }
};
int main() {
    ElectricBill bill;
    bill.inputDetails();
    bill.calculateBill();
    bill.printBill();
    return 0;
}
