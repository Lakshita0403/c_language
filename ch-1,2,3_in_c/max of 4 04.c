#include<stdio.h>
#include<conio.h>
main()
{ int a,b,c,d,max;
printf("enter 4 numbers;/n");
scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b)
    { if(a>c)
      {if(a>d)
         max=a;
         else
         max=d;
     }
     else
     { if(c>d)
       max=c;
       else
       max=d;
    }
  }
  else{
  if(b>c)
  {  if(b>d)
       max=b;
     else
      max=d;
  }
  else
   {
    if(c>d)
     max=c;
    else
     max=d;
   }
 }
    printf("max is %d",max);
    getch();
}








