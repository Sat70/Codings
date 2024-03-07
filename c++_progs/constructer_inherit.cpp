#include<iostream>
using namespace std;
class base1
{
    int i;
    public:
    base1(int x)
    {
        i=x;
        cout<<"Hello1"<<endl;
    }
    void print1(void)
    {
        cout<<"Base 1 And "<<i<<endl;
    }
};
class base2
{
    int i;
    public:
    base2(int x)
    {
        i=x;
        cout<<"Hello2"<<endl;
    }
    void print2(void)
    {
        cout<<"Base 2 And "<<i<<endl;
    }
};
class derived:public base1,public base2
{
    int j;
    public:
    derived(int x,int y,int z): base1(x),base2(y)
    {
        j=z;
        cout<<"Hello3"<<endl;
    }
    void print3(void)
    {
        cout<<"derived And "<<j<<endl;
    }
};
int main()
{
    derived obj(2,3,4);
    obj.print1();
    obj.print2();
    obj.print3();
    return 0;
}
