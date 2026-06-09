#include <stdio.h>
long long combination(int n, int r)
{
    if (r > n)
        return 0;
    if (r > n - r)
        r = n - r;
    long long result = 1;
    for (int i = 0; i < r; i++)
    {
        result = result * (n - i) / (i + 1);
    }
    return result;
}
int main()
{
    int N, M, P, E;
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &P);
    scanf("%d", &E);
    long long ways = combination(N, P) * combination(M, E);
    printf("%lld", ways);
    return 0;
}
