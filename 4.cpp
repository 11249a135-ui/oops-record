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
    void getDetails() {
        cout << "Enter Title  : ";
        getline(cin, title);
        cout<< "Enter Author : ";
        getline(cin, author);
        cout << "Enter Year   : ";
        cin >> year;
        cout << "Enter Price  : ";
        cin >> price;
    }
    void showDetails() const {
        cout << "Title  : " << title  << endl;
        cout << "Author : " << author << endl;
        cout << "Year   : " << year   << endl;
        cout << "Price  : " << price  << endl;
    }
};
int main() {
    int n;
    cout << "How many books? ";
    cin >> n;
     Book *library = new Book[n];
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Book " << (i + 1) << ":\n";
        library[i].getDetails();
    }
    cout << "\n*** Library Book Details ***\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nBook " << (i + 1) << ":\n";
        library[i].showDetails();
    }
    delete[] library;
    return 0;
}
