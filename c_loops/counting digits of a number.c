#include<stdio.h>
int main()
{
   int n,count=0;
   printf("enter a number:");
   scanf("%d",&n);
   while(n)
   {
       count++;
       n=n/10;
   }
printf( "no of digits is %d",count);
}

