#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int a[56],i;
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are\n");
    for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
}
