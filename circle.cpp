#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class Circle {
    private:
        double radius;
        string color;
    public:
    void getRadius(){
        cout << "Nhap ban kinh hinh tron: ";
        cin >> this -> radius;
    }
    void getColor(){
        cout<<"Nhap mau cua hinh tron: ";
        cin >>this -> color;
    }
    
    // Getter methods để truy cập private members
    double getRadiusValue() const {
        return radius;
    }
    
    string getColorValue() const {
        return color;
    }
    //công thức tính chu vi hình tròn
    double circumference() {
        return 2 * M_PI * radius;
    }
    //công thức tính diện tích hình tròn
    double area() {
        return M_PI * radius * radius;
    }
    //hàm kiểm tra bán kính nhập và có hợp lệ ko
    bool is_valid(){
        return radius >= 0;
    }
    //hàm xuất màu sắc của hình tròn
    string circle_color(){
        return color;
    }
};
int main() {
    Circle circle1;     //thêm object
    circle1.getRadius();
    circle1.getColor();
    cout << "Chu vi hình tròn: " << circle1.circumference() << " đơn vị" << endl;
    cout << "Diện tích hình tròn: " << circle1.area() << " đơn vị vuông" << endl;
    cout<<boolalpha;    //xuất kết quả hàm bool có dạng true/false thay vì 1/0
    cout<<"Bán kính hình tròn có hợp lệ ko: "<<circle1.is_valid()<<endl;
    cout<<"Màu của hình tròn là: "<<circle1.circle_color()<<endl;
    return 0;
}
