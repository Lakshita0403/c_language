#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d", n%2==0);
    // if(n%2==0)
    // printf("Number is divisible by 2");
    // else 
    // printf("Number is not divisible by 2");
    return 0;
}