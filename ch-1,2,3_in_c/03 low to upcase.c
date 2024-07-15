/*lower to upper character*/
#include<stdio.h>
main()
{ char ch;
  printf("enter a lowercase character\n");
  /*scanf("%c",&ch);or*/
  /*lowercase to uppercase without using ascii*/
  ch=getchar();
  if(ch>='a'&&ch<='z')
  ch=ch-('a'-'A');
  /*printf("character is %c",ch);*/
  putchar(ch);
}
