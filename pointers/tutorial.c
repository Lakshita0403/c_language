#include<stdio.h>
int main()
{
    printf("lets learn about pointers\n");
    int a=76;
    int*p=&a;
    int*p2=NULL;
    printf("the value of a is %d\n",*p);
    printf("the value of a is %d\n",a);
    printf("the address of pointer to a is %p\n",&p);    //control d to print a line multiple times
    printf("the address of a is %p\n",&a);
    printf("the address of some garbage is %p\n",p2);
    printf("the address of a is %p\n",p);
    return 0;

}
