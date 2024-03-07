#include<iostream>
using namespace std;
class A
{
    int x;
    public:
        A(){}
        A(int y)
        {
            x=y;
        }
        A operator>>(A &ob1)
        {
            A temp;
            temp.x=x>>ob1.x;
        }
        void print()
        {
            cout<<"\n"<<x;
        }
};
int main()
{
    A ob1(9),ob2(10),ob3;
    ob3=ob1>>ob2;
    ob1.print();
    ob2.print();
    ob3.print();
    return 0;
}