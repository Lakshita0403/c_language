#include<stdio.h>
void main()
{
    int i,j,a[3][3];
    printf("Enter a 3x3 Matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("\n%d",&a[i][j]);

            }
    }
    printf("all values are\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}