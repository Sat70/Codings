#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int marks[5];
        void getData()
        {
            cout<<"\n"<<"Enter the name : ";
            getline(cin,name);
            cout<<"\nEnter the marks :";
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
        }
};
class Details:virtual public student
{
    public:
    string fatherName;
    string motherName;
        void getDetails()
        {
            getchar();
            cout<<"\n"<<"Enter the father name : ";
            getline(cin,fatherName);
            cout<<"\n"<<"Enter the mother name : ";
            getline(cin,motherName);
        }
};
class sessionalMarks:virtual public student
{
    public :
    double sMarks;
        void getMarks()
        {
            cout<<"\n"<<"Enter the sessional marks : ";
            cin>>sMarks;
        }
};
class Teacher:public Details,public sessionalMarks
{
    public :
    double sum;
        void display()
        {
            sum=0;
            for(int i=0;i<5;i++)
            {
                sum=sum+marks[i];
            }
            sum=sum+sMarks;
            cout<<"The Total Marks is : "<<sum;
        }
};
int main()
{
    Teacher obj;
    obj.getData();
    obj.getDetails();
    obj.getMarks();
    obj.display();
    return 0;
}