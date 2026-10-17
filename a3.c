#include<stdio.h>
int main()
{
    int cp, sp;
    float profit, loss;
    printf("enter a selling price and cost price:");
    scanf("%d%d", &cp, &sp);
    if(sp>cp)
    {
        profit = sp - cp;
        printf("profit is %f\n", profit);

    }
    else if(cp>sp)
    {
        loss = cp - sp;
        printf("loss is %f\n", loss);
    }
    else
    {
        printf("no profit and no loss");
    }
    return 0;


}