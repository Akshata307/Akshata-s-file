//Print the loss percentage value in double, rounded to 2 decimal places.
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
