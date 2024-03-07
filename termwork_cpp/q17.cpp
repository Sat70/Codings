/*
Q17. Implement using a proper diagram a real case scenario by a proper C++ code to provide the solution to Diamond Problem in C++(assume the mode of inheritance and accessibility as per your choice)
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int rno;

public:
    void setdata1(string x, int y)
    {
        name = x;
        rno = y;
    }
    void display1()
    {
        cout << "Name is : " << name << endl;
        cout << "Rno is : " << rno << endl;
    }
};

class marks : virtual public student
{
    int m1, m2, m3;

protected:
    int total;

public:
    void setdata2(int x, int y, int z)
    {
        m1 = x;
        m2 = y;
        m3 = z;
        total = m1 + m2 + m3;
    }
    void display2()
    {
        cout << "Marks in subject 1 : " << m1 << endl;
        cout << "Marks in subject 2 : " << m2 << endl;
        cout << "Marks in subject 3 : " << m3 << endl;
    }
};

class sports : virtual public student
{
protected:
    int spm;

public:
    void setdata3(int x)
    {
        spm = x;
    }
    void display3()
    {
        cout << "Sports marks are : " << spm << endl;
    }
};

class totalmarks : public marks, public sports
{
public:
    void setdata4()
    {
        cout << "Total marks are : " << total + spm << " Out of 400" << endl;
        cout << "Percentage is : " << (total + spm) / 4 << "%" << endl;
    }
};

int main()
{
    totalmarks ob;
    ob.setdata1("Divyansh", 29);
    ob.display1();
    ob.setdata2(90, 88, 85);
    ob.display2();
    ob.setdata3(93);
    ob.display3();
    ob.setdata4();
    return 0;
}