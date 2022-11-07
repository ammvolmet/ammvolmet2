#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the length of three sides:\n");
    scanf("%d %d %d", &a, &b, &c);
    if((a+b>c) || (b+c>a) || (c+a> b))
    printf("triangle can be formed");
    else
    printf("triangle can't be formed");
    return 0;
}