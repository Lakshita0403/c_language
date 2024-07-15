#include<stdio.h>
int main()
{
    /*int n,i;
    printf("enter a no.\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\n",i%4+1);*/


  int i,term,n;
      printf("enter a no.\n");
      scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      printf("%3d",term);
      if(term==4)
        term=1;
      else
        term++;
  }

}
