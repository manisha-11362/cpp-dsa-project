#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Method to set dimensions
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    double getArea() {
        return length * width;
    }

    // Method to calculate perimeter
    double getPerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    double l, w;

    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter width of rectangle: ";
    cin >> w;

    rect.setDimensions(l, w);

    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;

    return 0;
}