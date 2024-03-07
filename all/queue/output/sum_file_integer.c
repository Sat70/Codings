#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fc;
    char str[100];
    fp=fopen("hello.txt","w+");
    fc=fopen("hello1.txt","w+");
    if(!fp || !fc)
    {
        printf("Error");
        exit(0);
    }
    fgets(str,sizeof(str),stdin);
    fputs(str,fp);
    rewind(fp);
    int num;
    while((fscanf(fp,"%d",&num))!=EOF)
    {
        int sum=0;
        while(num!=0)
        {
            int rem=num%10;
            sum+=rem;
            num=num/10;
        }
        printf("%d ",sum);
        fprintf(fc,"%d ",sum);
    }
    rewind(fc);
    fclose(fp);
    fclose(fc);return 0;
}