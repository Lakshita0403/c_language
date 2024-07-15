#include<stdio.h>
void main()
{
    FILE*fp;
     char name[30];
    fp=fopen("student.dtxt","r");
    if(fp==NULL)
{
     printf("file does not exist\n");
    exit(0);
}
fgets(name,10,fp);
printf("%s",name);
fclose (fp);
}
