#include<stdio.h>
#include<ctype.h>
int fact(int);  //function declare(to inform compiler)
int main()
{ int ans;
 ans 1=fact(5);  //function call/use
 ans 2 =fact(6);
 return 0;
}
int fact(int n)  //function define/logic
{
  int i,f;
  for(i=1;i<=n;i++)
     f*=i;
     return f;
}
