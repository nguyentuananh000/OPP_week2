#include <iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;
    string address;
    string phoneNumber;
    public:
    void setName(string _name) {name = _name;}
    void setAge(int _age) {age = _age;}
    void setAddress(string _address) {address = _address;}
    void setPhoneNumber(string _phonenumber){phoneNumber = _phonenumber;}
    //hiển thị thông tin cá nhân
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout<<"Phone Number: "<<phoneNumber<<endl;
    }
    //kiểm tra có phải người trưởng thành không
    bool isAdult() {
        return age >= 18;
    }
    //đổi địa chỉ nhà
    void move(string newAddress) {
        address = newAddress;
        cout << "Address updated to: " << newAddress << endl;
    }
    //đưa ra lời chào mừng
    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
};
int main() {
    //ví dụ
    Person person1;
    person1.setName ("John Doe");
    person1.setAge (20);
    person1.setAddress ("123 Main St");
    person1.setPhoneNumber ("20702384");
    person1.displayInfo();
    //kiểm tra người trưởng thành
    person1.greet();
    if (person1.isAdult()) {
        cout << "This person is an adult." << endl;
    } else {
        cout << "This person is not an adult." << endl;
    }
    // cập nhật địa chỉ nhà
    person1.move("456 Oak Avenue");
    person1.displayInfo();
    return 0;
}
