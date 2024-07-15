#include<stdio.h>
void main()
{
    int age, p;
    char gender;
    printf("enter the age\n");
    scanf("%d",&age);
    fflush(stdin);
    printf("enter the gender of employee\n");
    scanf("%c",&gender);
    if(gender=='m'||gender=='M')
    {
        if (age>=90)
        p=4000;
        else if(age>=60)
        p=6000;
        else
        p=0;
    }
    else if(gender=='f'||gender=='F')
    {
        if(age>=90)
        p=3000;
        else if(age>=60)
        p=5000;
        else
        p=0;
    }
     else
        p=0;
     printf("pension is Rs %d",p);

}
