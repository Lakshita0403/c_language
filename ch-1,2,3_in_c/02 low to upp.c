
/*lower to upper character*/
#include<stdio.h>
main()
{ char ch;
  printf("enter a lowercase character\n");
  /*scanf("%c",&ch);or*/
  /*lowercase to uppercase using ascii*/
  ch=getchar();
  if(ch>=97&&ch<=122)
  ch=ch-32;
  /*printf("character is %c",ch);*/
  putchar(ch);
}
