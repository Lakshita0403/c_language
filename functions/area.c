#include <stdio.h>
#include <math.h>

float squarearea(float side);
float circlearea(float rad);
float rectanglearea(float a, float b);

int main()
{
    float a = 5;
    float b = 7;
    printf("area is : %f\n", rectanglearea(a, b));
    // return 0;

    float side = 9;
    printf("area is : %f\n", squarearea(side));
    // return 0;

     float rad = 4.1;
     printf("area is : %f", circlearea(rad));
     return 0;
}

float squarearea(float side)
{
    return side * side;
}

float circlearea(float rad)
{
    return (3.14 * rad * rad);
}

float rectanglearea(float a, float b)
{
    return a * b;
}