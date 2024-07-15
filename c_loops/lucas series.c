//sum of previous two numbers
#include<stdio.h>
int main()
{
    int n,count,a,b,c,sum;
    printf("enter how many nos.");
    scanf("%d",&n);
    count=1;
    a=0,b=0;
    c=1;
    while(count<=n)
    {
      printf("%d\t",c);
      sum=a+b+c;
      a=b;
      b=c;
      c=sum;
      count++;
    }
}
