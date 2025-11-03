Find the hypotenuse of a right-angled triangle when two sides 
#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    double hypotenuse = sqrt(x * x + y * y);
    printf("%.2f", hypotenuse);
    return 0;
}
