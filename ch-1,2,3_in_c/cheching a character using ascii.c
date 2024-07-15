#include<stdio.h>
main()
{ char ch;
 printf("enter any character\n");
 ch=getchar();
 if(ch>=97&&ch<=122)
    printf("lower case alphabet\n");
 else if(ch>=65&&ch<=90)
    printf("upper case alphabet");
 else if(ch>=48&&ch<57)
    printf("character is a digit");
 else if(ch==32)
    printf("its space");
 else
    printf("special character");
putchar(ch);
}
