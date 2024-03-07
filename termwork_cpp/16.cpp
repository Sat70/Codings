#include<iostream>
using namespace std;
class student
{
    private:
             int age;
             string name;
             int enroll_no;
             int marks[3];
    public: 
              void getdata()
              { 
                 int i;
                 cout<<"\n"<<"Enter the age : ";
                 cin>>age;
                 cout<<"\n"<<"Enter the name : ";
                 cin.ignore();
                 getline(cin,name);
                 cout<<"\n"<<"Enter the enrollment number : ";
                 cin>>enroll_no;
                 cout<<"\n"<<"Enter the marks : ";
                 for(i=0;i<3;i++)
                 {
                    cin>>marks[i];
                 }
              }
              void display()
              {
                int i,sum=0;
                 cout<<"\n"<<"The age is : ";
                 cout<<age;
                 cout<<"\n"<<"The name is : ";
                 cout<<name;
                 cout<<"\n"<<"The enrollment no is : ";
                 cout<<enroll_no;
                 cout<<"\n"<<"The marks is : ";
                 for(i=0;i<3;i++)
                 {
                    sum=sum+marks[i];
                    cout<<sum/3;
                 }
              }
    
};
class Faculty
{
    private:
             string  fname;
             int fcode;
             int salary;
             string dep;
             string gender;
             int age;
             int experience;
    
    public:
            void gdata()
            {
             cout<<"\n"<<"Enter the faculty name : ";
             cin.ignore();
             getline(cin,fname);
             cout<<"\n"<<"Enter faculty code : ";
             cin>>fcode;
             cout<<"\n"<<"Enter the salary : ";
             cin>>salary;
             cout<<"\n"<<"Enter the department name : ";
             getline(cin,dep);
             cout<<"\n"<<"Enter the gender : ";
             cin.ignore();
             getline(cin,gender);
             cout<<"\n"<<"Enter the age : ";
             cin>>age;
             cout<<"\n"<<"Enter the experience : ";
             cin>>experience;
            }

            void disp()
            {
                cout<<"\n"<<"The faculty name is : ";
                cout<<fname;
                cout<<"\n"<<"The faculty code is : ";
                cout<<fcode;
                cout<<"\n"<<"The salary is : ";
                cout<<salary;
                cout<<"\n"<<"The department name is : ";
                cout<<dep;
                cout<<"\n"<<"The gender name is : ";
                cout<<gender;
                cout<<"\n"<<"The age is : ";
                cout<<age;
                cout<<"\n"<<"The experience is : ";
                cout<<experience;
            }
};
class person : public student , public Faculty
{    
     private:
               string  faname;
               string  mname;
                
    public :
              void data()
              {
                   cout<<"\n"<<"Enter father name : ";
                   cin.ignore();
                   getline(cin,faname);
                   cout<<"\n"<<"Enter mother name : ";
                   cin.ignore();
                   getline(cin,mname);
              }
             void dis()
             {
                cout<<"\n"<<faname<<endl;
                cout<<"\n"<<mname<<endl;

             }
             
};
int main()
{
   person ob1;
   ob1.getdata();
   ob1.gdata();
   ob1.data();
   ob1.display();
   ob1.disp();
   ob1.dis();
   return 0;
}