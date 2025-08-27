#include <iostream>
using namespace std;
class Student {
    private:
    string name;
    double grade;
    public:
    void setName(string _name){ name = _name;}
    void setGrade(double _grade) { grade = _grade;}
    void displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    }
};
int main() {
    Student student1;
    student1.setName ("John");
    student1.setGrade (8.5);
    student1.displayInfo();
return 0;
}
