#include <stdio.h>

void linsearch(int arr[], int);
void main()
{
    int i, n, arr[20];
    printf("Enter no. of array elements\n");
    scanf("%d", &n);
    printf("Enter array elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    linsearch(arr, n);
}

void linsearch(int arr[], int n)
{
    int num, i, loc = 0, found = 0;
    printf("Enter searching element :");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            found = 1;
            loc = i;
            break;
        }
    }
    if (found == 1)
        printf("Number = %d is found at position %d", num, loc);
    else
        printf("Number not found");
}