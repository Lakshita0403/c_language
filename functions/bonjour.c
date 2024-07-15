#include<stdio.h>
void Namaste();
void Bonjour();


int main() {
    printf("Enter f for French and i for Indian :");
    char ch;
    scanf("%c",&ch);

     Namaste();
//     if(ch == 'i')
//    {
//      Namaste();
//    }
//    else {
//     Bonjour();
//    }

   return 0;
}

void Namaste()
{
    printf("Namaste\n");
    Bonjour();
}

void Bonjour()
{
    printf("Bonjour\n");
}