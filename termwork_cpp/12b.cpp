#include<iostream>
using namespace std;
class A
{
    int real,img;
    public :
    A(){}
    A(int x,int y)
    {
        real=x;
        img=y;
    }
    A operator-(A &o)
    {
        A temp;
        temp.real=real-o.real;
        temp.img=img-o.img;
        return temp;
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};
int main()
{
    A ob1(3,4),ob2(1,2),ob3;
     cout<<"Prevoius : "<<endl;
     ob1.print();
     ob2.print();
    ob3=ob1-ob2;
    cout<<"New Value : "<<endl;
    ob3.print();
    return 0;
}