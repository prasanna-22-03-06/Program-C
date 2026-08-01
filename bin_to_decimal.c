#include <stdio.h>
int main() {
    int a, rem,dec=0,ba=1;
    scanf("%d",&a);
    while(a!=0) {
        rem=a%10;
        dec=dec+rem*ba;
        ba=ba*2;
        a=a/10;
    }
    printf("%d", dec);
    return 0;
}