#include <stdio.h>
int main() {
    int n, re, reee = 0, chan = 0;
    scanf("%d", &n);
    while (n > 0) {
        re = n % 10;
        if (re == 0)
            re = 1;
        reee = reee * 10 + re;
        n = n / 10;
    }
    while (reee > 0) {
        re = reee % 10;
        chan = chan * 10 + re;
        reee = reee / 10;
    }
    printf("%d", chan);
    return 0;
}