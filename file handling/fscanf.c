#include<stdio.h>
void main()
  {
    char name[30];
    int rollnumber;
    float per;
   FILE *fp;
   fp=fopen("student.txt","r");
   if(fp==NULL)
   {
       printf("file does not exist\n");
       exit(0);
   }
    fscanf(fp,"%s\t%d\t%f",name,&rollnumber,&per);
    printf("%s\t%d\t%f",name,&rollnumber,&per);
    fclose(fp);
  }
