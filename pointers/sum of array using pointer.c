#include<stdio.h>
void main()
{
    int n,*p,sum=0;
    printf("enter array size\n");
    scanf("%d",&n);
    int a[n],i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        p=&a[0];
       for(i=0;i<n;i++)
       {
        sum=sum+*p;
        p++;
    }
    printf("sum=%d\n",sum);
}
