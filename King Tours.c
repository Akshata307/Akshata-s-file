// King loves to go on tours with his friends. King has N cars that can seat 5 people each and M cars that can seat 7 people each.
  #include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", n * 5 + m * 7);
    return 0;
}
