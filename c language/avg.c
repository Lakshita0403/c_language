#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c, avg;
    printf("Enter a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);
    avg = a + b + c / 3;
    printf("%d", avg);
    return 0;
}