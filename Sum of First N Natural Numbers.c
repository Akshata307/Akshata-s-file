Given an integer number N, find the sum of the first N natural numbers.
  #include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int sum = N * (N + 1) / 2;
    printf("%d", sum);
    return 0;
}
