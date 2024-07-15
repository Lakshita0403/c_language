#include<stdio.h>
void main()
{
    int a[30],i ,num ,pos,size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements of your choice:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter data you want to insert:\n");
    scanf("%d",&num);
   // printf("Enter position:\n");
   //scanf("%d",&pos);
    if(pos<0||pos>size+1)
    {
        printf("Invalid position!\n");
    }
    else
    {
        // for (i = size-1; i >=0; i--)
        // {
        //     a[i+1]=a[i];
        // }
       // a[0]=num;      // insertion at the starting postion
       a[size]=num;     //Insertion at the end position
        size++;
        
        printf("The elements are as follows:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
        
    }
    
}