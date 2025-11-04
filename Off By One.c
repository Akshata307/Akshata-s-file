You just bought a new calculator, but it seems to have a small problem: all its results have an extra 1 appended to the end.
For example, if you ask it for 3 + 5, it'll print 81, and 4 + 12 will result in 161.
Given A and B, can you predict what the calculator will print when you ask it for A+B?
Input Format

#include <stdio.h>

int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int result = (A + B) * 10 + 1;
    printf("%d", result);
    return 0;
}
