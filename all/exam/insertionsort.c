#include<stdio.h>
int main()
{
    int a[]={10,1,3,2,4,5,13};
    for(int i=0;i<(sizeof(a)/sizeof(a[0]));i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(int i=0;i<7;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}