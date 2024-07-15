#include<stdio.h>
int max (int x,int y){  //define
 return x>y?x:y;
}
int main()
{
   int a,b;     //func. call
   printf("enter two numbers:\n");
   scanf("%d%d",&a,&b);
   printf("max is %d",max(a,b));
   return 0;
}
