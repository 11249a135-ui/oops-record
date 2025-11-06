#include <iostream>
#include <cstring> 
using namespace std;
class StringCompare {
    char str[100];  
public:
    StringCompare(const char* s = "") {
        strcpy(str, s);
    }
void display() const {
        cout << str;
    }
     bool operator==(const StringCompare& s) const {
        return strcmp(str, s.str) == 0;
    }
 bool operator<(const StringCompare& s) const {
        return strcmp(str, s.str) < 0;
    }
bool operator>(const StringCompare& s) const {
        return strcmp(str, s.str) > 0;
    }
};
int main() {
    StringCompare s1("Apple");
    StringCompare s2("Banana");
cout << "String 1: ";
    s1.display();
    cout << "\nString 2: ";
    s2.display();
    cout << "\n\n";
if (s1 == s2)
        cout << "Both strings are equal." << endl;
    else if (s1 > s2)
        cout << "String 1 is greater than String 2 (alphabetically)." << endl;
    else
        cout << "String 1 is smaller than String 2 (alphabetically)." << endl;
return 0;
}
