#include<stdio.h>
main()
{ float per;
  char grade;
  printf("enter per\n");
  scanf("%f",&per);
  if(per>=90)
    grade='a';
  else
{ if(per>=70)
    grade='b';
    else
    { if(per>=50)
     grade='c';
      else
     grade='f';

    }
}
printf("grade is %c",grade);
}
