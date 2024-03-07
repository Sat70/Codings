//Example Array of objects
#include<iostream>
using namespace std;
class student{
    private:
        string nm;
        int rn;
        int marks[5];
        string dp;
    public:
        void getData();
        char grade();
        void printData();
        
};
void student::getData()
        {
            cout<<"Enter the Roll No. :";
            cin>>rn;
            cout<<"\n";
            cout<<"Enter the marks obtained:";
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
            getchar();
            cout<<"Enter the name of the student :";
            getline(cin,nm);
            cout<<"\n";
            cout<<"Enter the Department :";
            getline(cin,dp);
            cout<<"\n";
           
        }
       char student::grade()
        {
            float sum=0;
            for(int i=0;i<5;i++)
            {
                sum+=marks[i];
            }
            sum=sum/5;
            if(sum>=90)
            {
                return 'A';
            }
            else if(sum<90 && sum>=80)
            {
                return 'B';
            }
            else if(sum<80 && sum>=70)
            {
                return 'C';
            }
            else if(sum<70 && sum>=60)
            {
                return 'D';
            }
            else{
                return 'F';
            }
        }
        void student::printData()
        {
            cout<<"\n";
            cout<<"The Roll No. is :";
            cout<<rn;
            cout<<"\n";
            //getchar();
            cout<<"The name of the student :";
            cout<<nm;
            cout<<"\n";
            cout<<"The Grade is:";
            char a=grade();
            cout<<a;
            cout<<"\n";
            cout<<"The Department :";
            cout<<dp;
            cout<<"\n";
            //cout<<"\n";
        }
int main()
{
    student s[2];
    for(int i=0;i<2;i++)
    {
        s[i].getData();
    }
    for(int i=0;i<2;i++)
    {
        s[i].printData();
    }
    return 0;
}