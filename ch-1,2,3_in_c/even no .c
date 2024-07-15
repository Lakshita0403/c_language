#include<stdio.h>
main()
{ int i,n,c=0;
  printf("enter number\n");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {if(i%2==0)
     printf("%d\n",i);
     c++;
  }
    printf("total even numbers are=%d\n",c);
}

