#include<stdio.h>
#include<conio.h>
main()
{
 int a,b,max;
 printf("enter 2 numbers");
 scanf("%d%d",&a,&b);
 if(a>b)
    max=a;
 else
    max=b;
    printf("max is %d",max);
 getch();

}
