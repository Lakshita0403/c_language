#include<stdio.h>

void sqr(int n);
int main()
{
  int n;
  printf(" input any number for square :\n");
  scanf("%d", &n);
  sqr(n);
  printf(" The square of %d is : \n", n*n);

  return 0;
}

void sqr(int n)
{
   return (n*n);
}