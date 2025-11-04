In the Gymkhana elections of IIIT-A, N members are nominated for senator positions. The total number of voters in the college is M.
Om, one of the N nominees, wants to secure a strict majority win in the election.
Assuming all voters cast their votes, find the minimum number of votes Om requires to ensure a strict majority win.
Note that in a strict majority win, all the nominees have strictly lesser votes than the winner.

#include <stdio.h>

int main()
{
    long long N, M;
    scanf("%lld %lld", &N, &M);
    long long required_votes = (M / 2) + 1;
    printf("%lld", required_votes);
    return 0;
}
