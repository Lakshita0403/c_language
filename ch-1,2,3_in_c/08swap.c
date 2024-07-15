#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,t;
    printf("enter two numbers",a,b);
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("after swap values are%d,%d",a,b);
    getch();

}
