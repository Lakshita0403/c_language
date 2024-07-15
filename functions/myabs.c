#include<stdio.h>
int myabs(int);
int main()
 {
   int n,ans;
   printf("enter a number");
   scanf("%d",&n);
   ans=myabs(n);
   printf("result is %d",ans);
   return 0;
 }
  int myabs(int r)
  {
      if(r<0)
        return -r;
        return r;
  }

