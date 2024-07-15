//fputs(str,fp); this function isi used to write string data into a file
#include<stdio.h>
void main()
{
    char name[30];
    int rollnumber;
    float per;
    FILE*fp;
    fp=fopen("l.txt","w");
    printf("enter name\n");
    gets(name);
    fputs(name,fp);
    printf("data is written successfully");
    fclose(fp);
}
