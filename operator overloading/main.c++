#include <iostream>

template <class T>
class Complex {
    T a, b;

   public:
    Complex() {
        a = 0;
        b = 0;
    }
    void disp() {
        std::cout << a << " + " << b << "i\n";
    }
    Complex(T val1, T val2) : a(val1), b(val2) {}
    template <class T1>
    friend Complex<T1> operator+(Complex<T1> c1, Complex<T1> c2);
    template <class T1>
    friend std::ostream& operator<<(std::ostream& o, Complex<T1>& c1);
};
template <class T1>
Complex<T1> operator+(Complex<T1> c1, Complex<T1> c2) {
    Complex<T1> temp;
    temp.a = c1.a + c2.a;
    temp.b = c1.b + c2.b;
    return temp;
}

template <class T1>
std::ostream& operator<<(std::ostream& o, Complex<T1>& c1) {
    o << c1.a << " + "
      << c1.b << "i\n";
    return o;
}

int main() {
    Complex<int> c1(5, 7);
    Complex<int> c2(3, 5);
    Complex<int> c3 = c1 + c2;
    std::cout << c1;
    std::cout << c2;
    return 0;
}