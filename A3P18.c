#include<stdio.h>
int main()
{
    int x;
    printf("enter month number:\n");
    scanf("%d", &x);
    if(x==1 || x==3 || x==5 || x==7 ||x==8 || x==10 || x==12)
    printf("number of days are 31.");
    else if(x==4 || x==6 || x==9 || x==11)
    printf("number of days are 30.");
    else if(x==2)
    printf("number of days are 28(29 in leap year).");
    return 0;
}