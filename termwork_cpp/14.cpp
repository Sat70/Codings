#include<iostream>
using namespace std;
class base
{
    private:
              int a;

              void data()
              {
                 cout<<"this is private function"<<endl;
              }
    protected:
               int b;
               void data1()
               {
                 cout<<"this is protected function"<<endl;
               }
    public:
               int c;
               void data3()
               {
                  cout<<"this is public function"<<endl;
               }
};
class dervied : private base
{
    private:
              string  name;
    public:
              void getdata()
              {
                  cout<<"enter the name"<<endl;
              }
};
class der : public base
{
    private:
              string  name;
    public:
              void getdata()
              {
                  cout<<"enter the name"<<endl;
              }
};
class d : protected base
{
    private:
              string  name;
    public:
              void getdata()
              {
                  cout<<"enter the name"<<endl;
              }
};
int main()
{
    dervied ob1;
    der ob2;
    d ob3;
    ob1.data();    // private data member and member functions are not accessible 
    ob1.data1();   // protected become private in derived class and also we can not access protected outside the class 
    ob1.data3();   // public becomes private when access specifer is private not accessible

    ob2.data();    // private can never be accessible
    ob2.data1();   // protected is protected when public inherited so the object can not access it outside the class 
    ob2.data3();   // public is public when publically inherited so accessible
     
    ob3.data();   // priavte is not accessible in derived as well as outside 
    ob3.data1();  // public becomes protected when protected inherited can't accessible
    ob3.data3();  // protected is protected and protected can't be accessible outside class

    return 0;

}
