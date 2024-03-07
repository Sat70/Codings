//Example Array of objects
#include<iostream>
using namespace std;
class employee{
    private:
        string nm;
        int id;
        int salary;
        float tsalary;
        string dp;
    public:
        void getData();
        void salaryt();
        void printData();
        
};
void employee::getData()
        {
            cout<<"Enter the ID :";
            cin>>id;
            cout<<"\n";
            cout<<"Enter the Base Salary :";
            cin>>salary;
            getchar();
            cout<<"Enter the name of the Employee :";
            getline(cin,nm);
            cout<<"\n";
            cout<<"Enter the Department :";
            getline(cin,dp);
            cout<<"\n";
            salaryt();
           
        }
void employee::salaryt()
{
    tsalary=salary+(0.25*salary)+(0.1*salary)+(0.05*salary);
}
void employee::printData()
{
    cout<<"\n";
    cout<<"The Employee Id is "<<id;
    cout<<"\n";
    cout<<"The Employee Total Salary Is :"<<tsalary;
    cout<<"\n";
    cout<<"The Employee Name Is :"<<nm;
    cout<<"\n";
    cout<<"The Department is :"<<dp;
    cout<<"\n";
}
      
int main()
{
    employee e[2];
    for(int i=0;i<2;i++)
    {
        e[i].getData();
    }
    for(int i=0;i<2;i++)
    {
        e[i].printData();
    }
    return 0;
}