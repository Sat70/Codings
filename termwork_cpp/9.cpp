#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
        A(int a)
        {
            x=a;
        }
        friend void swap(A &ob1,B &ob2);
        void display()
        {
            cout<<"\n"<<"The value of x is : "<<x;
        }
};
class B
{
    int y;
    public:
        B(int b)
        {
            y=b;
        }
        friend void swap(A &ob1,B &ob2);
        void display()
        {
            cout<<"\n"<<"The value of y is : "<<y;
        }
};
void swap(A &ob1,B &ob2)
{
    int temp=ob1.x;
    ob1.x=ob2.y;
    ob2.y=temp;
    cout<<"\n"<<"Swap Successfully..";
}
int main()
{
    A obj1(10);
    B obj2(20);
    cout<<"\n"<<"Before Swaping ...";
    obj1.display();
    obj2.display();
    swap(obj1,obj2);
    cout<<"\n"<<"After Swaping ...";
    obj1.display();
    obj2.display();
    return 0;
}
