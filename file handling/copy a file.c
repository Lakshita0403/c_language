// program to copy the content of one file into another
#include<stdio.h>
void main()
{
    char name[30];
    FILE *fp,*fp1;
    char ch;
    fp= fopen("student.txt","r");
    if(fp==NULL)
    {
        printf("file does not exist\n");
        exit(0);
    }
 fp1=fopen("g.txt","w");
 while((ch=getc(fp))!=EOF);
 {
     putc(ch,fp1);
 }
printf("file copied\n");
fclose(fp);
fclose(fp1);
}
