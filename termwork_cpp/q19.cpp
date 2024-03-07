#include <iostream>
using namespace std;

class cal_area
{
public:
    float r, h;
    void getdata()
    {
        cout << "Enter radius and height : ";
        cin >> r >> h;
    }
    virtual void display_vol() = 0;
};

class cone : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of cone is : " << (1.0 / 3) * 3.14 * r * r * h << endl;
    }
};

class hemisphere : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of hemisphere is : " << (2.0 / 3) * 3.14 * r * r * r << endl;
    }
};

class cylinder : public cal_area
{
public:
    void display_vol()
    {
        cout << "Volume of cylinder is : " << 3.14 * r * r * h << endl;
    }
};

int main()
{
    cal_area *ptr1 = new cone;
    ptr1->getdata();
    ptr1->display_vol();

    ptr1 = new hemisphere;
    ptr1->getdata();
    ptr1->display_vol();

    ptr1 = new cylinder;
    ptr1->getdata();
    ptr1->display_vol();
    return 0;
}