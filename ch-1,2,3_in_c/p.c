#include<stdio.h>
void main()
{float w,h,bmi;
printf("enter number\n");
scanf("%f%f",&w,&h);
bmi= (w)/(h*h);
printf("bmi=%f\n",bmi);
if(bmi<18.5)
printf("underweight/n");
if(bmi<24&&bmi>=18.5)
 printf("healthy/n");
if("bmi<30&&bmi>=24")
printf("overweight/n");
if(bmi>=30)
printf("obese/n");
}
