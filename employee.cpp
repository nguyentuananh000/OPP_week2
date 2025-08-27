#include <iostream>
using namespace std;
class Employee {
    private:
    string name;
    double salary;
    public:
    // Setter methods
    void setName(string _name) {
        name = _name;
    }
    
    void setSalary(double _salary) {
        if (_salary >= 0) {
            salary = _salary;
        } else {
            cout << "Error: Salary cannot be negative!" << endl;
        }
    }
    // Getter methods
    string getName() const {
        return name;
    }
    
    double getSalary() const {
        return salary;
    }
    
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main() {
    Employee employee1;
    employee1.setName("Alice");
    employee1.setSalary(50000);
    employee1.displayInfo();
    return 0;
}