#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int b=0;s<a-i-1;b++)
            printf(" ");
        for(int j=1;j<=i+1;j++)
            printf("%d",j);
        for(int j=i;j>=1;j--)
            printf("%d",j);
        printf("\n");
    }
}