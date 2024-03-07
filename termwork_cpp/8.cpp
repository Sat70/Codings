#include<iostream>
using namespace std;
class TollBooth
{
    private:
        unsigned int total_car;
        double money_collected;
    public:
        TollBooth()
        {
            total_car=0;
            money_collected=0;
        }
        void payingCar()
        {
            ++total_car;
            money_collected=money_collected+0.5;
        }
        void nonPayingCar()
        {
            ++total_car;
        }
        void display()
        {
            cout<<"\n";
            cout<<"Total Number Of Cars : "<<total_car;
            cout<<"\n";
            cout<<"Money Collected : "<<money_collected;
            cout<<"\n";
        }
};
int main()
{
    TollBooth obj;
    char x;
    do{
        cout<<"\n";
        cout<<"Enter P or p For Paying Car.\n";
        cout<<"Enter N or n For Non-Paying Car.\n";
        cout<<"Enter : ";
        cin>>x;
        switch(x)
        {
            case 'P':
            case 'p':
                obj.payingCar();
                break;
            case 'N':
            case 'n':
                obj.nonPayingCar();
                break;
            case 27:
                obj.display();
                cout<<"\n";
                cout<<"EXIT.....";
                exit(0);
            default:
                cout<<"\n"<<"Please Enter A Valid Choice...";
                break;
        }
    }while(1);
    return 0;
}