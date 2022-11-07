#include<stdio.h>
int main()
{
    char c;
    printf("enter an alphabet:\n");
    scanf("%c", &c);
    if(c>='a'&& c<='z')
    printf("lowercase");
    else if(c>='A'&& c<='Z')
    printf("UPPERCASE");
    return 0;
}