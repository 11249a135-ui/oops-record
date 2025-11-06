#include <iostream>
using namespace std;
class Time {
    int hours, minutes, seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() const {
        cout << hours << "h : " << minutes << "m : " << seconds << "s" << endl;
    }
 int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }
bool operator==(const Time& t) const {
        return toSeconds() == t.toSeconds();
    }
bool operator<(const Time& t) const {
        return toSeconds() < t.toSeconds();
    }
 bool operator>(const Time& t) const {
        return toSeconds() > t.toSeconds();
    }
};
int main() {
    Time t1(2, 30, 15);  
    Time t2(3, 10, 5);   
cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();
    cout << endl;
    if (t1 == t2)
        cout << "Both times are equal." << endl;
    else if (t1 < t2)
        cout << "Time 1 is earlier than Time 2." << endl;
    else
        cout << "Time 1 is later than Time 2." << endl;
 return 0;
}
