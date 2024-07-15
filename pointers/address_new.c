#include<stdio.h>

//void printAddress(int n);
void printAddress(int *n);

int main(){
    int n = 6;
    // printAddress(n);
    // printf("address of n is : %u\n", &n);

     printAddress(&n);
    printf("address of n is : %u\n", &n);
    return 0;
}

// void printAddress(int n)
// {
// printf("address of n is : %u\n", &n);
// }

void printAddress(int *n)
{
printf("address of n is : %u\n", n);
}