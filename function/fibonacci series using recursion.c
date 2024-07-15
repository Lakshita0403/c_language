#include<stdio.h>
int fibonacci (int n)
{
    // if no. is less than 2 in case of 0 and 1
  if(n<2)
  {
      return n;
  }
    else {
    return(fibonacci(n-1)+fibonacci(n-2));
}
 int main()
 {
      int num;
      printf("no. of terms to print in a fibonacci series");
      scanf("%d",&num);
      for(int i=0;i<num;i++)
          printf("%d",fibonacci(i));
 }
   return 0;
 }

