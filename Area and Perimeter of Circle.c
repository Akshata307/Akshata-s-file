//Given an integer radius of a circle, find the area and perimeter (circumference) of the circle.
#include <stdio.h>
int main()
{
    int r;
    scanf("%d", &r);
    float area = 3.14 * r * r;
    float peri = 2 * 3.14 * r;
    printf("%.2f %.2f", area, peri);
    return 0;
}

