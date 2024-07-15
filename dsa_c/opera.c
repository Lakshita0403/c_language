#include<stdio.h>
#include<string.h>
#include<conio.h>

 void push(char);
 char pop();
 char stack[50];
 int top =-1;
 char ch;

 void push(char ch)
 {
     if (top==49)
        printf("full stack");
     else
     {
         stack[++top]=ch;
     }
 }
 char pop()
 {

     char ch;
     if(top==-1)
     {
         printf("stack is empty");
         return '#';
     }
     else
     {

         ch=stack[top];
         top--;
         return ch;
     }
     return 0;
 }
