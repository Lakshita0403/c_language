#include<stdio.h>
int main()
{
   int n,p,i,ans=1;
   printf("enter a no. and its power:\n");
   scanf("%d%d",&n,&p);
   /*i=1;
    while(i<=p)
    {
        ans=ans*n;
        i++;
    }
    printf("result is %d",ans);*/
    while(p--)
        ans=ans*n;
    printf("result is %d",ans);
}
