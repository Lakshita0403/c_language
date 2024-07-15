#include<stdio.h>
int main()
{
    int n,i,k;
    printf("enter a no.\n");
    scanf("%d",&n);
    for(i=1,k=2;i<n;i++,k*=2)
        printf("%.3f\  ",1.0/k);
}
