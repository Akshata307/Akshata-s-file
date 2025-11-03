#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int total = x * 5 + y * 10;
    printf("%d", total / z);
    return 0;
}
