#include <stdio.h>
void main()
{
    int i;
    int arr[5] = {12, 34, 56, 89, 99};
    printf("The address of the array is: %d\n", arr);
        printf("The addresses of the four elements are as below.\n");
    for (i = 0; i < 5; i++)
        printf("Address of arr[%d] = %d\n", i, arr + i);
}