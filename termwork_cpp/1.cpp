#include<iostream>
using namespace std;
class bill
{
    string nm;
    int units;
    float totalBill;
public:
    void getData()
    {
        cout<<"Enter The Units Consumed : ";
        cin>>units;
        cout<<"\n";
        getchar();
        cout<<"Enter Your Name : ";
        getline(cin,nm);

    }
    void calBill()
    {
        if(units<100)
        {
            totalBill=60*units;
        }
        else if(units<200 && units>=100)
        {
            totalBill=units*80;
        }
        else
        {
            totalBill=units*90;
        }

        if(totalBill<50)
        {
            totalBill=50;
        }
        else if(totalBill>300)
        {
            totalBill=totalBill+(totalBill*0.15);

        }
    }
    void printData()
    {
        cout<<"\n";
        cout<<"The Name is : "<<nm;
        cout<<"\n";
        cout<<"The Total Bill is "<<totalBill;
    }
};
int main()
{
    int n;
    cout<<"Enter the number of records :";
    cin>>n;
    bill b[n];
    for(int i=0;i<n;i++)
    {
        b[i].getData();
        b[i].calBill();
    }
    for(int i=0;i<n;i++)
    {
        b[i].printData();
    }
    return 0;
}
