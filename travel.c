#include <stdio.h>
int main()
{
    int H, M;
    scanf("%d", &H);
    scanf("%d", &M);
    int total = H * 60 + M;
    int remaining = 1440 - total;
    int hours = remaining / 60;
    int minutes = remaining % 60;
    printf("%02d::%02d", hours, minutes);
    return 0;
}
