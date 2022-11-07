#include<stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    printf("enter the marks of subject 1:\n");
    scanf("%d", &m1);
     printf("enter the marks of subject 2:\n");
    scanf("%d", &m2);
     printf("enter the marks of subject 3:\n");
    scanf("%d", &m3);
     printf("enter the marks of subject 4:\n");
    scanf("%d", &m4);
     printf("enter the marks of subject 5:\n");
    scanf("%d", &m5);
    if(m1>33 && m2>33 && m3>33 && m4>33 && m5>33)
    printf("passed");
    else
    printf("failed");
    return 0;
}