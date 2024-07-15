#include<stdio.h>
main()
{ float n,sum=0;
  do
 {printf("enter numbers\n");
 scanf("%f",&n);
 sum=sum+n;
}
while(n!=0);
printf("sum=%f\n",sum);
}
