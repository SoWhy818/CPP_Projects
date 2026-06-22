#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}
    Point(int xValue, int yValue) : x(xValue), y(yValue) {}

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    void setX(int xValue) {
        x = xValue;
    }

    void setY(int yValue) {
        y = yValue;
    }

    void print() const {
        cout << "(" << x << ", " << y << ")";
    }

    double distanceTo(const Point& other) const {
        int dx = x - other.x;
        int dy = y - other.y;
        return sqrt(static_cast<double>(dx * dx + dy * dy));
    }
};

int main() {
    Point p1;
    Point p2(3, 4);

    p1.print();
    cout << "\n";
    p2.print();
    cout << "\n";
    cout << "Distance: " << p1.distanceTo(p2) << endl;

    return 0;
}
