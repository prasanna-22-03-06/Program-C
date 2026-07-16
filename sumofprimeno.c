#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        int c1 = 0, c2 = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                c1++;
        }
        for (int j = 1; j <= n - i; j++) {
            if ((n - i) % j == 0)
                c2++;
        }
        if (c1 == 2 && c2 == 2) {
            printf("%d = %d + %d", n, i, n - i);
            break;
        }
        }
    return 0;
}