#include <iostream>
using namespace std;
class FirstOne {
    int val1;
    int val2;
    friend class SecondOne;

   public:
    FirstOne(int a, int b) : val1(a), val2(b) {
    }
};

class SecondOne {
   public:
    SecondOne() {
    }
    void values(FirstOne f){
        cout<<"Val 1 : "<<f.val1;
        cout<<"\nVal 2 : "<<f.val2;
    }
};

int main() {
    FirstOne f1 = FirstOne(21, 99);
    SecondOne frF1 = SecondOne();
    frF1.values(f1);
    return 0;
}