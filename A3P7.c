#include<stdio.h>
int main()
{
    int a, b, c;
    printf("consider a quadratic equation (ax^2+bx+c)");
    printf("enter the values of a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    if(b^2>(4*a*c))
    printf("roots are real and distinct.");
     else if(b^2<(4*a*c))
    printf("roots are imaginary");
    else if(b^2==(4*a*c))
    printf("roots are real and equal.");
   
    return 0;
}