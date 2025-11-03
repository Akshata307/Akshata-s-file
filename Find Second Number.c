The average of two numbers is X. The first number is Y. Find the second number.
#include <stdio.h>

int main()
{
    int X, Y, second;
    scanf("%d %d", &X, &Y);
    second = 2 * X - Y;
    printf("%d", second);
    return 0;
}
