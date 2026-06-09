#include <stdio.h>
int main()
{
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    if ((2 * n * m) % k == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
