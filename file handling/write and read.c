
#include<stdio.h>
void main()
  {
    char name[30];
    int rollnumber;
    float per;
   FILE *fp,*fp1;
   fp=fopen("student.txt","w");
    printf("enter name\n");
    gets(name);
    printf("enter rollnumber and per\n");
    scanf("%d%f",& rollnumber,& per);
    fprintf(fp,"%s%d%f\n",name,rollnumber,per);
    fp1=fopen("student.txt","r");
   if(fp1==NULL)
   {
       printf("file does not exist\n");
       exit(0);
   }
    fscanf(fp1,"%s%d%f",name,&rollnumber,&per);
    printf("%s%d%f",name,rollnumber,per);
    fclose(fp);
    fclose(fp1);
  }
