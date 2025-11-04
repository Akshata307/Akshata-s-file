Write a Program to print the color name by taking the Color code as input.
V -> Violet
I -> Indigo
B -> Blue
G -> Green
Y -> Yellow
O -> Orange
R -> Red
Note: If none of the above mentioned character is entered as input, print -1 as output.

#include <stdio.h>

int main()
{
    char ch;
    ch = getchar();  // Read a single character from input

    switch(ch)
    {
        case 'V': printf("Violet"); break;
        case 'I': printf("Indigo"); break;
        case 'B': printf("Blue"); break;
        case 'G': printf("Green"); break;
        case 'Y': printf("Yellow"); break;
        case 'O': printf("Orange"); break;
        case 'R': printf("Red"); break;
        default: printf("-1"); break;
    }

    return 0;
}
