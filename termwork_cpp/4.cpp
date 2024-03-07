#include<iostream>
using namespace std;
class bank
{
    private:
        string name;
        int acc_number;
        char type_of_acccount;
        float balance;
    public:
        void getData()
        {
            cout<<"Enter the Account Number : ";
            cin>>acc_number;
            cout<<"\n";
            getchar();
            cout<<"Enter the Account Holder Name : ";
            getline(cin,name);cout<<"\n";
            cout<<"Enter the type of Account S for Saving And C for Current : ";
            cin>>type_of_acccount;
            balance=0.0;
        }
        void deposit()
        {
            float dp;
            cout<<"\n";
            cout<<"Enter the Amount to be Deposited : ";
            cin>>dp;
            balance=balance+dp;
        }
        void withdraw()
        {
            float drw;
            cout<<"\n";
            cout<<"Enter the Amout to be Withdrawn : ";
            cin>>drw;
            if(drw>balance)
            {
                cout<<"\n";
                cout<<"Insufficent Balance.....";
                return;
            }
            else if(drw<balance)
            {
                cout<<"\n";
                cout<<"Withrawn Successfully.....";
                balance=balance-drw;
                return;
            }
        }
        void display()
        {
            cout<<"\n";
            cout<<"The Name is : "<<name;
            cout<<"\n";
            if(type_of_acccount=='C' || type_of_acccount=='c')
            {
                cout<<"The Account Type is : Current\n";
            }
            else{
                cout<<"The Account Type is : Savings\n";
            }
            cout<<"Account Number is : "<<acc_number;
            cout<<"\n";
            cout<<"Balance : "<<balance;
        }
};
int main()
{
    int x;
    bank obj;
    do{
        cout<<"\n";
        cout<<"\n";
        cout<<"Main Menu : \n";
        cout<<"1 for Registering New Account.\n";
        cout<<"2 for Deposit Money.\n";
        cout<<"3 for Withdrawal.\n";
        cout<<"4 for Dsiplay Details.\n";
        cout<<"Other Numbers to Exit.\n";
        cout<<"\nEnter Your Choice : ";
        cin>>x;
        switch(x)
        {
            case 1:
                obj.getData();
                break;
            case 2:
                obj.deposit();
                break;
            case 3:
                obj.withdraw();
                break;
            case 4:
                obj.display();
                break;
            default:
                cout<<"EXIT.....";
                exit(0);
        }
    }while(1);
    return 0;
}
