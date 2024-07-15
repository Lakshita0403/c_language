#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a no.\n");
        scanf("%d", &n);
        //printf("%d\n", n);
        if (n % 2 != 0)
        {
            break;
        }

    } while (1);
    printf("Thank uuuu");
    return 0;
}