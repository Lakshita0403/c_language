#include<stdio.h>
int main()
{
  int *p,a=2;
  p=&a;     //address copy
  printf("\n address of p is %u",&p);
  printf("\n value of a is %d",a);
  printf("\n value of a is %d",*p);
  printf("\n address of a is %u",&a);
  printf("\n address of a is %d",p);
  printf("\n value of p is %u",&p);
  printf("\n value of a through address of a is %d",*(&a));
    printf("\n value of a through address of a is %d",*(&a));
  printf("\n value of a through address of p is %d",*p);

  *p=10;   //derefrence
  printf("\n new value of a is %d",a);
}
