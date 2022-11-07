#include<stdio.h>
int main()
{
    double cp, sp, profit, loss, proper, lossper;
    
     printf("enter cost price:\n");
     scanf("%lf", &cp);
     printf("enter selling price:\n");
     scanf("%lf", &sp);
     profit=(sp-cp);
     loss=(cp-sp);
     lossper=(loss*100/cp);
     proper=(profit*100/cp);
    if(sp>cp)
     printf("profit percentage  is %lf", proper);
    else if(cp>sp)
     printf("loss percentage is %lf", lossper);
    else
     printf("no loss or gain");
    return 0;
}