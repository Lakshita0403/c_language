#include <stdio.h>
int main()
{
    float n;
    printf(" Enter the marks: \n");
    scanf("%f", &n);

    if (n >= 90 && n <= 100)
        printf("Grade is A++\n");
    else if (n >= 70 && n < 90)
        printf(" Grade is A\n");
    else if (n >= 30 && n < 70)
        printf("Grade is B\n");
    else
        printf("Grade is C\n");

    return 0;
}