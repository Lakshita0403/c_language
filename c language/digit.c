#include <stdio.h>

int main()
{
    int n;
    printf("Enter any charater:");
    scanf("%c",&n);
    printf("%c",n);
    if(n>0 && n<9)
    printf("%d is a digit",n);
    else
    printf("%c is not a digit",n);
    return 0;

}