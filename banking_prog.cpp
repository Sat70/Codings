#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class bankCustomer;
int verifyAdmin();
int verifyCustomer();
int main()
{
    int x;
    do
    {
        cout<<"\x1b[1m             RK PUBLIC BANK            \x1b[0m";
        cout<<"\n\n";
        cout<<"Enter 1 for Banking Services.\n";
        cout<<"Enter 2 for Loan Services.\n";
        cout<<"Enter your choice : ";
        int opt;
        cin>>opt;
        switch(opt)
        {
            case 1:
                do{
                cout<<"Enter 1 for Adminstration Log In.\n";
                cout<,"Enter 2 for Customer Log In";
                cout<<"Enter Any other number to Exit.\n";
                cout<<"Enter Your Choice : ";
                cin>>x;
                switch(x)
                {
                    case 1:
                        if(verifyAdmin())
                        {
                            cout<<"\n";
                            printf("Access Denied.\n")
                            break;
                        }
                        else
                        {
                        cout<<"\n";
                        cout<<"Log In Successfully.\n";
                        }
                        int ch;
                        do{
                            bankCustomer bc[100];
                            cout<<"x1b[1mMain Menu : \x1b[0m";
                            cout<<"\n";
                            cout<<"1 for Opening an Account.\n";
                            cout<<"2 for Closing an Existing Account.\n";
                            cout<<"3 for Deposit Money.\n";
                            cout<<"4 for Withdrwal of Money.\n";
                            cout<<"5 to Get All Details.";
                            cout<<"6 to get a Balance Sheet of an Existing Account.\n";
                            cout<<"Any other number to EXIT.\n";
                            cout<<"Enter Your Choice : ";
                            cin>>ch;
                            static int i=0;
                            switch(ch)
                            {
                                case 1:
                                    bc[i].getDetailsOfNewCustomer();
                                    i++;
                                    break;
                                case 2:
                                    cout<<"\nEnter the Customer Detils.\n";
                                    cout<<"Account Number : ";
                                    int accountNumber;
                                    cin<<accountNumber;
                                    cout<<"Name : ";
                                    string name;
                                    getline(cin,name);
                                    for(int j=0;j<=i;j++)
                                    {
                                        if(bc[i].deleteExinstingCustomer(name,accountNumber));
                                        {
                                            cout<<"\n";
                                            cout<<"Deleted Successfully.\n";
                                            break;
                                        }
                                    }
                                    break;
                                case 3:
                                    cout<<"\nEnter the Customer Detils.\n";
                                    cout<<"Account Number : ";
                                    int accountNumber;
                                    cin>>accountNumber;
                                    getchar();
                                    cout<<"Name : ";
                                    string name;
                                    getline(cin,name);
                                    for(int j=0;j<=i;j++)
                                    {
                                        if(bc[i].check(name,accountNumber));
                                        {
                                        break;
                                        }
                                    }
                                    if(bc[i].accountType=='s')
                                    {
                                        bc[i].depositForSavings();
                                    }
                                    else
                                    {
                                        bc[i].depositForCurrent();
                                    }
                                    break;
                                case 4 :
                                    cout<<"\nEnter the Customer Detils.\n";
                                    cout<<"Account Number : ";
                                    int accountNumber;
                                    cin>>accountNumber;
                                    getchar();
                                    cout<<"Name : ";
                                    string name;
                                    getline(cin,name);
                                    for(int j=0;j<=i;j++)
                                    {
                                        if(bc[i].check(name,accountNumber));
                                        {
                                        break;
                                        }
                                    }
                                    if(bc[i].accountType=='s')
                                    {
                                        bc[i].withdrwalForSavings();
                                    }
                                    else
                                    {
                                        bc[i].withdrwalForCurrent();
                                    }
                                    break;
                                case 5:
                                    cout<<"\nEnter the Customer Detils.\n";
                                    cout<<"Account Number : ";
                                    int accountNumber;
                                    cin>>accountNumber;
                                    getchar();
                                    cout<<"Name : ";
                                    string name;
                                    getline(cin,name);
                                    for(int j=0;j<=i;j++)
                                    {
                                        if(bc[i].check(name,accountNumber));
                                        {
                                        break;
                                        }
                                    }
                                    bc[i].displayCustomerDeatils();
                                    break;
                                case 6 :
                                    cout<<"\nEnter the Customer Detils.\n";
                                    cout<<"Account Number : ";
                                    int accountNumber;
                                    cin>>accountNumber;
                                    cout<<"\n";
                                    getchar();
                                    cout<<"Name : ";
                                    string name;
                                    getline(cin,name);
                                    for(int j=0;j<=i;j++)
                                    {
                                        if(bc[i].check(name,accountNumber));
                                        {
                                        break;
                                        }
                                    }
                                    bc[i].balancesheet();
                                    break;
                                default:
                                    printf("EXIT...\n");
                                    break;
                            
                            }
                        }while(ch<7);
                        break;
                    case 2:
                        if(verifyCustomer())
                        {
                            cout<<"\n";
                            printf("Access Denied.\n")
                            break;
                        }
                        else
                        {
                        cout<<"\n";
                        cout<<"Log In Successfully.\n";
                        }
                        int customer_choice;
                        cout<<"Menu : ";
                        cout<<"Enter Your Deatils : \n";
                        cout<<"Account Number : ";
                        int accountNumber;
                        cin>>accountNumber;
                        getchar();                          
                        cout<<"Name : ";
                        string name;
                        getline(cin,name);
                        for(int j=0;j<=i;j++)
                        {
                            if(bc[i].check(name,accountNumber));
                            {            
                                break;
                            }
                        }
                        bc[i].displayCustomer();
                        break;
                    default : 
                        cout<<"Try Again.\n";
                        break;
                }
                }while(x<3);
        }
    
    }while(opt<3); 
}
class Customer
{
    protected:
        string name;
        int aadharNo[12];
        int dateofBirth[3];
        int accountNumber;
        char typeofAccount;
        float balance;
        float interest;
        string Address;
        string fatherName;
        string motherName;
        stirng Occupation;
        string pancardNo;
        int withdrawlas[100];
        int deposites[100];
        
    public:
        void getDetailsOfNewCustomer()
        {

        }
        int deleteExinstingCustomer(string nm,int accNum)
        {

        }
        void updateBalance()
        {

        }
        void depositForCurrent()
        {

        }
        void depositForSavings()
        {

        }
        void withdrwalForCurrent()
        {

        }
        void withdrwalForSavings()
        {

        }
        void getBalance()
        {

        }
        char accountType()
        {

        }
        void check()
        {
            
        }
        void displayCustomerDeatils()
        {

        }
        void displayCustomer()
        {

        }
        void balancesheet()
        {

        }

};