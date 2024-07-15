/*lower to upper character*/
#include<stdio.h>
#include<ctype.h>
main()
{ char ch;
  printf("enter a lowercase character\n");
  /*scanf("%c",&ch);or*/
  /*lowercase to uppercase using predefined library function*/
  ch=getchar();
  ch=toupper(ch);

  /*printf("character is %c",ch);*/
  putchar(ch);
}
