#include<stdio.h>
main()
{ int y;
  printf("enter year\n");
  scanf("%d",&y);
  if(y%100==0)
  { if(y%400==0)
    printf("year is leap");
    else
    printf("year is not leap");
  }
 else
   { if(y%4==0)
    printf("year is leap");
     else
    printf("year is not leap");
   }
}
