#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1,j= 1; j<=n && i <= n; i++ , j++)
    {
        sum = sum + i;
        printf("%d\n",j);
    }
    
    printf("Sum is %d\n", sum);

//    for(int i=n; i>=1; i--)
//    {
//     printf("%d\n", i);
//    }
    return 0;
}