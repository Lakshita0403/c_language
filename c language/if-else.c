#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    // if(age>=18)
    // {
    //     printf("adult\n");
    //     printf("They can vote, They can drive\n");
    // }

    // else if(age>13 && age<18)
    // {
    //     printf("teenager\n");
    // }
    // else{
    //     printf("child\n");
    // }

    // printf("Thankuu\n");

    age>=18 ? printf("adult\n") : printf("not adult\n");
    return 0;
}
