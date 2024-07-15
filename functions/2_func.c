#include<stdio.h>
void Hello();    //function declaration
void Goodbye();

int main()
{
    Hello();     // function call
    Goodbye();
    return 0;
}

void Hello()  //function defination
{
    printf("Hello\n");
}

void Goodbye()
{
    printf("Goodbye:)\n");
}
