#include<iostream>
using namespace std;
class A
{
    int a;
    public :
    A(){}
    A(int x)
    {
        a=x;
    }
    A operator-(A &o1)
{
    A temp;
    temp.a=a-o1.a;
    return temp;
}
    void print()
    {
        cout<<a;
    }
};
int main()
{
    A ob1(3),ob2(1),ob3;
    ob3=ob1-ob2;
    ob3.print();
    return 0;
}