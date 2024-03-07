#include <iostream>
using namespace std;

class areaCalculator {
public:
    double calculateArea(double side) {
        return side * side;
    }
    double calculateArea(double length, double width) {
        return length * width;
    }
    double calculateArea(double base, double height, char triangle) {
        return 0.5 * base * height;
    }
};

int main() {
    areaCalculator obj;
    double squareArea = obj.calculateArea(5.0);
    cout << "Area of square: " << squareArea <<endl;
    double rectangleArea = obj.calculateArea(4.0, 6.0);
    cout << "Area of rectangle: " << rectangleArea <<endl;
    double triangleArea = obj.calculateArea(3.0, 8.0, 'T');
    cout << "Area of triangle: " << triangleArea <<endl;
    return 0;
}
