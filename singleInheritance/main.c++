#include <iostream>

using namespace std;

class StudentInfo {
   protected:
    string name;
    int rollNumber;
    char sex;

   public:
    StudentInfo() {
        cout << "Enter Name : ";
        getline(cin,name);
        cout << "Enter Roll : ";
        cin >> rollNumber;
        cout << "Enter Sex : ";
        cin >> sex;
    }
    StudentInfo(string str, char s, int roll) : name(str), rollNumber(roll), sex(s) {}
    void displayStudent() {
        cout << "Name : " << name;
        cout << "Sex : " << sex;
        cout << "Roll : " << rollNumber;
    }
};

class StudentFit : public StudentInfo {
    double height, weight;

   public:
    StudentFit() {
        cout << "Height : ";
        cin >> height;
        cout << "Weight : ";
        cin >> weight;
    }
    StudentFit(double h, double w) {
        height = h;
        weight = w;
    }
    void displayStudentFit() {
        cout << "Name : " << name<<"\n";
        cout << "Sex : " << sex<<"\n";
        cout << "Roll : " << rollNumber<<"\n";
        cout << "Height : " << height<<"\n";
        cout << "Weight : " << weight;
    }
};

int main() {
    StudentFit obj1 = StudentFit();
    obj1.displayStudentFit();
    return 0;
}