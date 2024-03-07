#include<iostream>
using namespace std;
int main()
{
    int x,y;
    float ans;
    cout<<"Enter the values of x And y : ";
    cin>>x>>y;
    try
    {
        if(y==0)
        {
            throw(y);
        }
        else
        {
            ans=x/y;
            cout<<"\n"<<"The answer is : "<<ans;
        }
    }
    catch(int y)
    {
        cout<<"\n"<<"Exception Raised...\nCannot divide a number by Zero.";
    }   
}