
// copy all the words starting with capital alphabet to another file

#include<stdio.h>
#include<string.h>
int main()
{
     FILE *fp, *fc;
     char str[100];
     int i,j;
     char ch;
     fp=fopen("hello.txt","w+");
     fc=fopen("copy.txt","w+");
     if(!fp && !fc)
     {
         printf("Error Created/n");
         return 0;
     }
     printf("Enter the content of the file :");
     fgets(str,sizeof(str),stdin);
     fputs(str,fp);
     rewind(fp);
     //fp=fopen("hello.txt","r");
     while(fscanf(fp,"%s",str)!=EOF)
     {
         int i=0;
          if(str[i]>='A' && str[i]<='Z')
          {
            fprintf(fc,"%s ",str);
          }
     }
     //fclose(fp);
     rewind(fc);
    // fc=fopen("copy.txt","r");
    // rewind(fc);
    printf("\n");
    printf("The second file content is : ");
     while((ch=fgetc(fc))!=EOF)
     {
         printf("%c",ch);
     }
     fclose(fc);
     return 0;
}