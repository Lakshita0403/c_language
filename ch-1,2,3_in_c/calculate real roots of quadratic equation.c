#include<math.h>
main()
{
    float a,b,c,d,r1,r2;
    printf("enter a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>=0)
    {
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("roots are %f and %f",r1,r2);
}
 else
    printf("roots are imagnery\n");
}
