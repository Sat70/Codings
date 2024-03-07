#include <iostream>
using namespace std;
class Hotel
{
    private:
        int Rno;
        string name;
        float Tariff;
        int NOD;
        float calc()
        {
            float amount;
            amount = NOD*Tariff;
            if(amount>10000)
            {
                amount = 1.05*amount;
                return amount;
            }
            else
            {
                return amount;
            }
        }
    public:
        void checkIn()
        {
            cout<<"Enter the Room Number :";
            cin>>Rno;
            cout<<"\n";
            cout<<"Enter the Tariff : ";
            cin>>Tariff;
            cout<<"\n";
            cout<<"Enter the number of days of stay :";
            cin>>NOD;
            cout<<"\n";
            getchar();
            cout<<"Enter the Customer Name :";
            getline(cin,name);
        }
        void checkOut()
        {
            cout<<"\n";
            cout<<"The Name of the Customer is : "<<name;
            cout<<"\n";
            cout<<"The Room Number is : "<<Rno;
            cout<<"\n";
            cout<<"The Number of Days Stayed is : "<<NOD;
            cout<<"\n";
            cout<<"The Tariff Charged is : "<<Tariff;
            cout<<"\n";
            cout<<"The Amount to be Paid is : "<<calc();
        }
};
int main()
{
    Hotel obj;
    obj.checkIn();
    obj.checkOut();
    return 0;
}