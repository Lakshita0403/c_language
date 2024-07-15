//A program to add and subtract two numbers using function
//function with no argument and no return type
#include<stdio.h>
void add();      //function declaration
void sub();
main()
{
  add();     //function call
  sub();
}
void add()
{
    int a=40,b=56,c;
    c=a+b;
    printf("sum=%d\n",c);
}
void sub()
{ int a=56,b=6,d;
 d=a-b;
 printf("sub=%d\n",d);
}
