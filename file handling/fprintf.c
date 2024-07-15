#include<stdio.h>
void main()
{
    char name[30];
    int rollnumber;
    float per;
    FILE*fp;
    fp=fopen("student.txt","w");
    printf("enter name\n");
    gets(name);
    printf("enter rollnumber and per\n");
    scanf("%d%f",& rollnumber,& per);
    fprintf(fp,"%s%d%f\n",name,rollnumber,per);
    printf("data is written\n");
    fclose(fp);
    }
