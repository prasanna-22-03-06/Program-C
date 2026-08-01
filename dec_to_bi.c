#include <stdio.h>
int main(){
    int de,rem,bi=0;
    int a=1;
    scanf("%d", &de);
    while (de!=0) {
        rem=de%2;
        bi=bi+rem*a;
        a=a*10;
        de=de/2;
    }
    printf("%d",bi);
    return 0;
}