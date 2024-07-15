#include <stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter a no.\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
       fact= fact*i;
    }
    printf("Final factorial is %d",fact);
    
    return 0;
}