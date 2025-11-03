Find the area of a triangle using Heron’s formula.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double s = (a + b + c) / 2.0;
    printf("%.4f", sqrt(s * (s - a) * (s - b) * (s - c)));
    return 0;
}
