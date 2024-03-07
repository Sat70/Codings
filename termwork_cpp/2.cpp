#include<iostream>
using namespace std;
class Test
{
    string str1;
    string str2;
public:
    void getData()
    {
        cout<<"Enter the string : ";
        getline(cin,str1);
        for(int i=0;i<str1.length();i++)
        {
            int flag=0;
            for(int j=0;j<str1.length();j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    if(str1[i]==str1[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                str2.push_back(str1[i]);
            }
        }
        cout<<str2;
        cout<<"\n";
        for(int i=0;i<str2.length();i++)
        {
            for(int j=i+1;j<str2.length();j++)
            {
                if(str2[i]>str2[j])
                {
                    char temp =str2[i];
                    str2[i]=str2[j];
                    str2[j]=temp;
                }
            }
        }
        for(int i=0;i<str2.length();i++)
        {
            cout<<str2[i];
            cout<<" ";
        }
    }

};
int main()
{
    Test t;
    t.getData();
    return 0;
}
