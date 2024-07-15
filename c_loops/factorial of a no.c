#include<stdio.h>
int main()
{
   int n,fact=1;
   printf("enter a no.:");
   scanf("%d",&n);
   while(n>0)
   {
       fact=fact*n;
       n--;
   }
   printf("factorial is %d",fact);
}
