#include <iostream>
using namespace std;

class Student {
   public:
    string name;
    int age;
    Student() {
        name = "apple";
        age = 4;
    }
    Student(string name, int age) {
        this->name = "apple";
        this->age = 4;
    }
    void* operator new(size_t size) {
        cout << "size is : " << size;
        void* ptr = malloc(size);
        return ptr;
    }
    void operator delete(void* ptr) {
        free(ptr);
        cout << "\ndeleted";
    }
};

int main() {
    Student* s1 = new Student;
    cout << "\n"
         << s1->name << "\n"
         << s1->age;
    delete s1;
    return 0;
}