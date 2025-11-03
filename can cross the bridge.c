#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (y >= z)
        printf("0");
    else
        printf("%d", (z - y) / x);

    return 0;
}
