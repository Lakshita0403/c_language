#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character :");
    scanf("%c", &ch);

    if (ch>= 'A' && ch<= 'Z')
    {
        printf("Upper Case\n");
    }
    else if(ch>= 'a' && ch<= 'z')
    {
        printf("Lower case\n");
    }
    else
    {
        printf("not english letter\n");
    }

    return 0;
}