#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d", &x);
    if(x%7==0)
    printf("%d is divisible by 7", x);
    else if (x%3==0)
    printf("%d is divisible 3", x); 
    else
    printf("neither divisible b 3 nor 7");
     return 0;
   }