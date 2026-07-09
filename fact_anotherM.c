#include <stdio.h>
int main()
{
    int a, b;
    int arr[100], aa[100];
    int i, j;
    int c1 = 0, c2 = 0;
    scanf("%d%d", &a, &b);
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            arr[c1] = i;
            c1++;
        }
    }
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            aa[c2] = i;
            c2++;
        }
    }
    int gcd = 1;
                gcd = arr[c1-1];
    printf("%d", gcd);
    return 0;
}