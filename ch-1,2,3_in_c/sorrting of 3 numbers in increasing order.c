#include<stdio.h>
void main()
{
    int a,b,c,t;
    printf("enter 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    if(c<a)
    {
        t=c;
        c=b;
        b=a;
        a=t;
    }
    else if(c<b)
    {
        t=c;
        c=b;
        b=t;
    }
    printf("after sort values are %d,%d,%d",a,b,c);
}
