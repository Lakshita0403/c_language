#include <stdio.h>
int main()
{
    int a[20], n, i, j, temp,p,k;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter elements :");
        scanf("%d", &a[i]);
    }


for(p=0;p<n;p++)
{
for(k=0;k<n-1;k++)
{
    if(a[k]>a[k+1])
    {
        temp = a[k];
        a[k] = a[k+1];
        a[k+1] = temp;
    }
}
    for(j=0;j<n;j++)
    {
        printf("%d\t",a[j]);
        printf("\n");

    }
}
}