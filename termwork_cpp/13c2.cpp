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
    friend A operator--(A &o,int);
    void print()
    {
        cout<<a<<"\n";
    }
};
A operator--(A &o,int)
    {
        A temp;
        temp.a=o.a--;
        return temp;
    }
int main()
{
    A ob1(3),ob2;
    ob2=ob1--;
        cout<<"Previous Value : "<<endl;

    ob1.print();
    cout<<"New Value : "<<endl;
    ob2.print();
    return 0;
}