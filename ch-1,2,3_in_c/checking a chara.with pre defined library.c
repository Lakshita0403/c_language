#include<stdio.h>
#include<ctype.h>
main()
{ char ch;
 printf("enter any character\n");
 ch=getchar();
 if(islower(ch))
    printf("lower case alphabet\n");
 else if(isupper(ch))
    printf("upper case alphabet");
 else if(isdigit(ch))
    printf("character is a digit");
 else if(isspace(ch))
    printf("its space");
 else
    printf("special character");
putchar(ch);
}
