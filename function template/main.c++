#include <iostream>

template <class T>
void square(T &a) {
    a = a * a;
}

template <class T>
void swapItems(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 9;
    std::cout << "a : " << a;
    std::cout << "\nb : " << b;
    swapItems(a, b);
    std::cout << "\n-------------\n";
    std::cout << "\na : " << a;
    std::cout << "\nb : " << b;
    std::cout << "\n-------------\n";
    square(a);
    square(b);
    std::cout << "\na : " << a;
    std::cout << "\nb : " << b;
    return 0;
}