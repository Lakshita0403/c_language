#include<stdio.h>
#include<ctype.h>
int main()
{
 char ch;
 printf("enter a character\n");
 ch=getchar();
 ch=toupper(ch);
 putchar(ch);
 return 0;
}
