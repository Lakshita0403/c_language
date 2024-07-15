#include<stdio.h>
void main()
{
    int a[30],size,i;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements of your wish:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are as follows:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
    
    
}