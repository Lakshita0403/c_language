#include<stdio.h>

void printlak(int count);

int main(){
printlak(5);
return 0;
}

void printlak(int count)
{
    if(count==0){
        return;
    }
    printf("Hello to my unique world\n");
    printlak(count-1);
}