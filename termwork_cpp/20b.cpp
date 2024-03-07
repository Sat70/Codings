#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the values : ";
    cin>>n;
    try
    {
        if(n<=0)
        {
            throw(n);
        }
        else
        {
            int fact=1;
            for(int i=n;i>1;i--)
            {
                fact*=i;
            }
            cout<<"\n"<<"The Factorial is : "<<fact;
        }
    }
    catch(int n)
    {
        cout<<"\n"<<"Exception Raised...\nNumber should be greater the 0.";
    }   
}