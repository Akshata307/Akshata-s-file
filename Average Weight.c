The average weight of a group of three boys is X kgs.The individual weights of two boys — W1 (Boy 1) and W2 (Boy 2) — are given Find the weight of the third boy.
  #include <stdio.h>

int main()
{
    int avg, w1, w2;
    scanf("%d %d %d", &avg, &w1, &w2);
    printf("%d", 3 * avg - w1 - w2);
    return 0;
}
