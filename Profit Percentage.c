Given the Cost Price (CP) and Selling Price (SP), calculate the Profit Percentage.
#include <stdio.h>

int main()
{
    int cp, sp;
    scanf("%d %d", &cp, &sp);
    double profit = sp - cp;
    double profitpercent = (profit / cp) * 100;
    printf("%.2f", profitpercent);
    return 0;
}
