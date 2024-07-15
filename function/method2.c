#include<stdio.h>
int fact(int n)
{
   int i,f;
   for(i=n;f=1;i>=1;i--)
    f*=i;
    return f;
}
 int main()
 {
    int n,ans;
    printf("enter a number\n");
    scanf("%d",&n);
    ans=fact(n);
    printf("factorial is %d",ans);
    return0;
 }
