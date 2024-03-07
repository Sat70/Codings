#include<iostream>
using namespace std;
class A
{
    int a,b;
    public :
    A(){}
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    A operator+(A &o)
    {
        A temp;
        temp.a=a+o.a;
        temp.b=b+o.b;
        return temp;
    }
    void print()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    A ob1(3,4),ob2(1,2),ob3;
    ob3=ob1+ob2;
    ob3.print();
    return 0;
}