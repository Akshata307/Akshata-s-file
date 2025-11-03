// Given an integer Year, print the last two digits of that year.
#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    printf("%02d", year % 100);
    return 0;
}
