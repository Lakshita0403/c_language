#include <stdio.h>
void binsearch(int[], int);
void main()
{
    int i, arr[45], n;
    printf("Enter no. of array elements\n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    binsearch(arr, n);
}
void binsearch(int arr[], int n)
{
    int i, low, high, mid, num;
    printf("Enter searching Element number \n");
    scanf("%d", &num);
    low = 0;
    high = n - 1;

    for (i = 0; i < n; i++)
    {
        if (high >= low)
        {
            mid = (high + low) / 2;
            if (arr[mid] == num)
            {
                printf("Element %d is found at position = %d", num, mid + 1);
                break;
            }
            else if (arr[mid] < num)
                low = mid + 1;
            else
                high = mid - 1;
        }

        {
            printf("Element is not found\n");
        } // end for loops
    }
}
