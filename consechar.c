#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    scanf("%s", str);
    int n = strlen(str);
    int sum = 0;
    for(int i = 0; i < n; )
    {
        int count = 1;
        while(i + count < n && str[i] == str[i + count])
        {
            count++;
        }
        if(count % 2 == 0)
        {
            sum += count;
        }
        i += count;
    }
    printf("%d", sum);
    return 0;
}
