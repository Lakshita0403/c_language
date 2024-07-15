#include <stdio.h>

int percent(int sci, int chem, int math);

int main()
{
    int sci = 98;
    int chem = 95;
    int math = 99;
    printf("result is %d", percent(sci, chem, math));
    return 0;
}

int percent(int sci, int chem, int math)
{
   int percent = ((sci + chem + math )/ 3);
    return percent;
}