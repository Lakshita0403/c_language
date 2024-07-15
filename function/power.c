#include<stdio.h>
int power(int,int);
int main()
{
  int n,p,ans;
  printf("enter a number and its power:");
  scanf("%d%d",&n,&p);
  ans=power(n,p);
  printf("result is %d",ans);
  return 0;
}
int power(int n,int p)
{
  int r;
  for(r=1;p;p--);
  r*=n;
  return r;
}
