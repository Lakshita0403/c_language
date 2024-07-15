#include<stdio.h>
int main()
{
   int a,b,*p1,*p2,t;
   p1=&a;
   p2=&b;
   printf("enter 2 integers:\n");
   scanf("%d%d",p1,p2);
      t=*p1;        //t=a
     *p1=*p2;       //a=b
     *p2=t;         //b=t
   printf("%d%d",a,b);
}
