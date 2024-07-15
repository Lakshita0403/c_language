#include<stdio.h>

int sum(int, int);  // function declaration
int main()
{
    int total;
    total = sum(5, 6);    //function call
    printf(" The total is : %d\n", total);
    return 0;
}

int sum (int a, int b)  //function defination
{
    int s;                   
    s = a+b;
    return s;   //function returning a value
}