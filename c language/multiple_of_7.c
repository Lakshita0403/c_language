
#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Enter a no. :");
        scanf("%d", &n);
        printf("%d\n", n);
        if (n % 7 == 0)
        {
            break;
        }

    } while (1);
    printf("Thank uuuu");
    return 0;
}

