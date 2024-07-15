#include<stdio.h>
main()
{ int n,i,p=1;
  printf("enter number\n");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  { if(n%i==0)
    { p=0;
      break;
    }
    if(p==1)
   printf("no. is prime\n");
   else
   printf("no. is not prime\n");

    }

  }
