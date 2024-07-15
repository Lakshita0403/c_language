#include<stdio.h>
main()
{ char ch;
 printf("enter any character\n");
 ch=getchar();
 if(ch>='a'&&ch<='z')
    printf("lower case alphabet\n");
 else if(ch>='A'&&ch<='Z')
    printf("upper case alphabet");
 else if(ch>='0'&&ch<='9')
    printf("character is a digit");
 else if(ch==' ')
    printf("its space");
 else
    printf("special character");
putchar(ch);
}
