#include <math.h>

#include <iostream>

using namespace std;

class Point {
    int x, y;

   public:
    Point() {
        x = 0;
        y = 0;
    }
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    friend ostream& operator<<(ostream& out, const Point&);
    friend Point operator+(Point, Point);
    friend double operator-(Point, Point);
};

Point operator+(Point pt1, Point pt2) {
    Point temp(pt1.x + pt2.x, pt1.y + pt2.y);
    return temp;
}

double operator-(Point pt1, Point pt2) {
    double temp = sqrt(pow(pt1.x - pt2.x, 2) + pow(pt1.y - pt2.y, 2));
    return temp;
}

ostream& operator<<(ostream& out, const Point& pt) {
    out << "(" << pt.x << "," << pt.y << ")\n";
    return out;
}

int main() {
    Point p2(5, 6);
    Point p1(3, 2);
    cout << p1;
    cout << p2;
    Point p3 = p1 + p2;
    cout << p1 - p2;
    return 0;
}