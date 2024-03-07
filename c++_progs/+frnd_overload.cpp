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
    
    void print()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend A operator+(int val,A &o2);
};
A operator+(int val,A &o2)
{
    A temp;
    temp.a=val+o2.a;
    temp.b=val+o2.b;
    return temp;
}
int main()
{
    A ob1(3,4),ob2(1,2),ob3;
    ob3=10+ob2;
    ob3.print();
    return 0;
}