//Python.math module provides access to the mathematical functions defined by the C standard.
One of the widely used function is math.pow(x, y) which Returns x raised to the power y.
Now, you are given three integers x, y and M. You have to print ( x ^ y ) Mod M. 

#include <stdio.h>
int main()
{
    int x, y, m, res = 1;
    scanf("%d %d %d", &x, &y, &m);
    while (y--)
        res = (res * x) % m;
    printf("%d", res);
    return 0;
}
