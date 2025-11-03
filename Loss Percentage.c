//Find the loss percentage when the Cost Price (CP) and Selling Price (SP) are given.
#include <stdio.h>

int main()
{
    int CP, SP;
    scanf("%d %d", &CP, &SP);
    double loss = CP - SP;
    double lossPercent = (loss / CP) * 100;
    printf("%.2f", lossPercent);
    return 0;
}
