#include<stdio.h>
void main()
{
    int i,n;
    printf("enter how many terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\,",i++);
        i++;
    }
  printf("\b ");
}
