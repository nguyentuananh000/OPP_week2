#include <iostream>
using namespace std;

class Course {
    private:
        string courseName;
        string courseCode;
        string instructorName;
        int credits;
    public:
        void getCourseName(string _courseName){courseName= _courseName;}
        void getCourseCode(string _courseCode){courseCode = _courseCode;}
        void getInstructorName(string _instructorName){instructorName = _instructorName;}
        void getCredits(int _credits){credits = _credits;}
    //hiển thị thông tin học phần
    void displayInfo() const {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor Name: "<< instructorName<<endl;
    }
    //kiểm tra khóa học có nhiều hơn 3 tín chỉ không
    bool isHighCredit() {
        return credits > 3;
    }
    //kiểm tra học phần có cần sử dụng phòng thí nghiệm hay không
    bool isLabRequired() {
        return credits > 4;
    }
};
int main() {
    Course course1;
    course1.getCourseName ("Object Oriented Programming");
    course1.getCourseCode ("CS202");
    course1.getCredits  (4);
    course1.getInstructorName  ("Nguyen Tuan Anh");
    
    cout << "=== Course 1 ===" << endl;
    course1.displayInfo();
    
    if (course1.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }
    
    if (course1.isLabRequired()) {
        cout << "This course requires a laboratory." << endl;
    } else {
        cout << "This course does not require a laboratory." << endl;
    }
    
    // Ví dụ khóa học thứ 2 có nhiều hơn 4 tín chỉ
    Course course2;
    course2.getCourseName  ("Database Systems");
    course2.getCourseCode ( "CS305");
    course2.getCredits ( 5);
    course2.getInstructorName ( "Ngo Ba Kha");
    
    cout << "\n=== Course 2 ===" << endl;
    course2.displayInfo();
    
    if (course2.isHighCredit()) {
        cout << "This is a high credit course." << endl;
    } else {
        cout << "This is not a high credit course." << endl;
    }
    
    if (course2.isLabRequired()) {
        cout << "This course requires a laboratory." << endl;
    } else {
        cout << "This course does not require a laboratory." << endl;
    }
    
    return 0;
}
