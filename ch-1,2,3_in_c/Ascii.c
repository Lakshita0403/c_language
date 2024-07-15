#include<stdio.h>
main()
{ char ch;
  printf("enter a char:");
  /*scanf("%c",&ch);
  or*/
  ch=getchar();
  ch=ch-32;
  /*printf("%c",ch);
  or*/
  putchar(ch);
}



