//sum of previous two numbers
#include<stdio.h>
int main()
{
    int n,count,a,b,sum;
    printf("enter how many nos.");
    scanf("%d",&n);
    count=1;
    a=0;
    b=1;
    while(count<=n)
    {
      printf("%d\t",b);
      sum=a+b;
      a=b;
      b=sum;
      count++;
    }
}
