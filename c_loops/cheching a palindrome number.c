#include<stdio.h>
int main()
{
   int n,rev=0,old;
   printf("enter a no.:");
   scanf("%d",&n);
   old=n;
   while(n)
   {
       rev=rev*10+n%10;
       n=n/10;
   }
   if(rev==old)
    printf("no. is palindrome");
   else
    printf("no. is not palindrome");
}
