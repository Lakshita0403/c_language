#include<stdio.h>
#include<conio.h>
 main()
 {
     char op;
     float a,b;
     printf("enter +,-,/,*\n");
     scanf("%c",&op);
     printf("enter a,b\n");
     scanf("%f%f",&a,&b);
     switch(op)
     {
        case'+': printf("sum=%f\n",a+b);
                 break;
        case'-': printf("sub=%f\n",a-b);
                 break;
        case'/': printf("division=%f\n",a/b);
                 break;
        case'*': printf("multiply=%f\n",a*b);
                 break;
        default : printf("invalid input");
     }
         getch();

 }
