#include<iostream>
using namespace std;
class userTwo;
class userOne
{
    private:
        string name;
        string fatherName;
        string motherName;
        char gender;
    public:
        void inputInfo()
        {
            cout<<"\n";
            cout<<"Enter Your Name : ";
            getline(cin,name);
            cout<<"\n";
            cout<<"Enter Your Father Name : ";
            getline(cin,fatherName);
            cout<<"\n";
            cout<<"Enter Your Mother Name : ";
            getline(cin,motherName);
            cout<<"\n";
            cout<<"Enter Your Gender : ";
            cin>>gender;
        }
        friend void userChecker(userOne &ob1,userTwo &ob2);
};
class userTwo
{
    private:
        string name;
        string fatherName;
        string motherName;
        char gender;
    public:
        void inputInfo()
        {
            cout<<"\n";
            getchar();
            cout<<"Enter Your Name : ";
            getline(cin,name);
            cout<<"\n";
            cout<<"Enter Your Father Name : ";
            getline(cin,fatherName);
            cout<<"\n";
            cout<<"Enter Your Mother Name : ";
            getline(cin,motherName);
            cout<<"\n";
            cout<<"Enter Your Gender : ";
            cin>>gender;
        }
        friend void userChecker(userOne &ob1,userTwo &ob2);
};
void userChecker(userOne &ob1,userTwo &ob2)
{
    if((ob1.fatherName==ob2.fatherName) && (ob1.motherName==ob2.motherName))
    {
        cout<<"\n"<<"Belongs to the Same Family.";
        if((ob1.gender==ob2.gender) && (ob1.gender=='M' || ob1.gender=='m'))
        {
            cout<<"\n"<<"We Are Brothers.";
        }
        else if(ob1.gender==ob2.gender && (ob1.gender=='F' || ob1.gender=='f'))
        {
            cout<<"\n"<<"We Are Sisters.";
        }
        else
        {
            cout<<"\n"<<"We Are Brother And Sister.";
        }
    }
    else
    {
        cout<<"\n"<<"Belongs to the Different Family.";
    }
}
int main()
{
    userOne obj1;
    userTwo obj2;
    obj1.inputInfo();
    obj2.inputInfo();
    cout<<"\n";
    userChecker(obj1,obj2);
    return 0;
}