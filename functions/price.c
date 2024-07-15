#include<stdio.h>

void calculatePrice(float value);

int main()
{
    float value = 100;
    calculatePrice(value);
    printf("value is : %f",value);  //  Changes to parameter and function don't change the values in calling function
    return 0;
}

void calculatePrice(float value)
{
    value = value + (0.18*value);
    printf("final price is : %f\n",value);
    
}