#include <iostream>
using namespace std;
class Rectangle {
    private:
    int width;
    int height;
    public:
    void setWidth(int _width) { width = _width;}
    void setHeight(int _height) { height = _height;}
    int calculateArea() {
    return width * height;
    }
};
int main() {
    Rectangle rect1;
    rect1.setWidth  (5);
    rect1.setHeight  (10);
    cout << "Area: " << rect1.calculateArea() << endl;
return 0;
}
