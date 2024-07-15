#include<stdio.h>
void main()
{
    int noc;                //noc= no.of calls
    float bill;
    printf("enter no. of calls\n");
    scanf("%d",&noc);
    if(noc<=100)
        bill=0;
    else if(noc<=200)
        bill=(noc-100)*0.8;
    else if(noc<=500)
        bill=80+(noc-200)*1;
    else
        bill=380+(noc-500)*1.2;
    printf("bill is %f",bill+100);
}
