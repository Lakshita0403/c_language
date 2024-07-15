#include<stdio.h>
#include<conio.h>
main()
{
    float p,r,t,si,ci;
    printf("enter principal\n");
    scanf("%f",&p);
    printf("enter time in years\n");
    scanf("%f",&t);
    printf("enter rate of interest\n");
    scanf("%f",&r);
    si=(p*r*t)/100;
    ci=p*pow(1+r/100,t)-p;
    printf("simple interest is %f\n compound interest is %f\n",si,ci);
}
