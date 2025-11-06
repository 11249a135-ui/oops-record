#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int year;
    double price;

public:

    Book(const string &t, const string &a, int y, double p)
        : title(t), author(a), year(y), price(p) {}

    
    void displayDetails() const {
        cout << "Title : "  << title  << endl;
        cout << "Author: "  << author << endl;
        cout << "Year  : "  << year   << endl;
        cout << "Price : "  << price  << endl;
    }
};

int main() {
    
    Book myBook("The Alchemist", "Paulo Coelho", 1988, 299.99);

    
    cout << "Book Details:\n";
    myBook.displayDetails();

    return 0;
}
