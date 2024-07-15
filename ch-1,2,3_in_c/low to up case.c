/*lower case to upper case*/
#include<stdio.h>
main()
{ char ch;
  printf("enter a character\n");
  /*scanf("%c",&ch);or*/
  ch=getchar();
  ch=ch-32;
  /*printf("character is %c",ch);*/
  putchar(ch);
}
