#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long totalSum = (long long)N * (N + 1) / 2;
    long long arraySum = 0;
    int num;
    for(int i = 0; i < N - 1; i++)
    {
        scanf("%d", &num);
        arraySum += num;
    }
    printf("%lld", totalSum - arraySum);
    return 0;
}