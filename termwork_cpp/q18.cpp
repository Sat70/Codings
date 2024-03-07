#include <iostream>
using namespace std;
class shape
{
public:
    double x, y;
    void get_data()
    {
        cout << "Enter values of x and y : ";
        cin >> x >> y;
    }
    virtual void display_area()
    {
    }
};
class triangle : public shape
{
public:
    void display_area()
    {
        cout << "Area of triangle is : " << 0.5 * x * y << endl;
    }
};
class rectangle : public shape
{
public:
    void display_area()
    {
        cout << "Area of rectangle is : " << x * y << endl;
    }
};
int main()
{
    shape *ptr;

    triangle ob1;
    ptr = &ob1;
    ptr->get_data();
    ptr->display_area();

    rectangle ob2;
    ptr = &ob2;
    ptr->get_data();
    ptr->display_area();
    return 0;
}