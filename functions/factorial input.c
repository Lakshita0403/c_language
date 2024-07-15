#include<stdio.h>
#include<ctype.h>
int fact(int);  //function declare
int main()
{
  int n,ans; //local variable
  printf("enter a number\n");
  scanf("%d",&n);
  ans=fact(n);  //function call/use
  printf("factorial is %d",ans);
  return 0;
}

   int fact(int n)  //function define/logic
{
  int i,f=1;
  for(i=n;i>=1;i--)
    f*=i;
  return f;
}
