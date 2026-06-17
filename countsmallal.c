#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[1000];
    int n;
    fgets(s, sizeof(s), stdin);
    scanf("%d", &n);  
    char lower[1000];
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (islower((unsigned char)s[i])) {
            lower[count++] = s[i];
        }
    }
    lower[count] = '\0';
    printf("%s %d", lower, count);
    return 0;
}