#include<stdio.h>

int main(){
//     float price = 100.00;
//     float *ptr = &price;
//     float **star = &ptr;

// printf("value is %f\n", **star);

int i = 10;
int *ptr = &i;
int **kuchu = &ptr;
 printf("value is %d\n", **kuchu);
    return 0;
}
