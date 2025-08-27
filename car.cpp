#include <iostream>
 using namespace std;

class Car {
    private:
        string brand;
        int year;
    public:
        void setbrand(string _brand){brand = _brand;}
        void setYear(int _year){year = _year;}
        
        void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        }
};
int main() {
    Car car1;
    car1.setbrand ( "Toyota");
    car1.setYear (2020);
    car1.displayInfo();
return 0;
}