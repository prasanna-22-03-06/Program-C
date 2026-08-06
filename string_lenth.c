#include <stdio.h>
#include <string.h>
int main() {
    int a;
    char b[10];
    fgets(b, sizeof(b), stdin);
    a = strlen(b);
    printf("%d", a);
    return 0;
}