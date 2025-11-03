//Consider a disk has 2 surfaces, each surface is divided into T tracks and each track is divided into S sectors, each sector is divided into B blocks. Each block has 512 bytes of memory. So find the capacity of the disk (in KB's).

#include <stdio.h>

int main()
{
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);
    int capacity_kb = T * S * B;
    printf("%d KB", capacity_kb);
    return 0;
}
