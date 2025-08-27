#include <iostream>
using namespace std;
class Book {
private:
    string title;
    string author;  
public:
    void setTitle(string _title){title = _title;}
    void setAuthor(string _author){author = _author;}
    void displayInfo() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    }
};
int main() {
    Book book1;
    book1.setTitle ( "C++ Programming");
    book1.setAuthor ( "Bjarne Stroustrup");
    book1.displayInfo();
return 0;
}