#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
public:
    Time() {
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }
    void display() {
        cout << hours << " hours and " << minutes << " minutes" << endl;
    }
    friend Time addTime(Time t1, Time t2);
};
Time addTime(Time t1, Time t2) {
    Time temp;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours = t1.hours + t2.hours + temp.minutes / 60;
    temp.minutes = temp.minutes % 60;
    return temp;
}
int main() {
    int h1, m1, h2, m2;
    cout << "Enter first time (hours minutes): ";
    cin >> h1 >> m1;
    Time t1(h1, m1);
    cout << "Enter second time (hours minutes): ";
    cin >> h2 >> m2;
    Time t2(h2, m2);
    Time t3 = addTime(t1, t2);
    cout << "Sum of times: ";
    t3.display();

    return 0;
}

