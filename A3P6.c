#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    if(a>b)
    printf(" %d",a);
    else if(b>a)
    printf("%d", b);
    else
    printf("%d", a);
    return 0;
}