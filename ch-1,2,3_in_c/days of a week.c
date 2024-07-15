#include<stdio.h>
#include<conio.h>
 main()
 { int n;
    printf("enter day\n");
    scanf("%d",&n);
    switch(n)
  { case 1: printf("monday\n");
            break;
    case 2: printf("tuesday\n");
            break;
    case 7: printf("sunday\n");
            break;
    case 3: printf("wednesday\n");
            break;
    case 4: printf("thrusday\n");
            break;
    case 5: printf("friday\n");
            break;
    case 6: printf("saturday\n");
            break;
    case 3: printf("wednesday\n");
            break;

       default : printf("invalid input\n");
  }
         getch();

 }
