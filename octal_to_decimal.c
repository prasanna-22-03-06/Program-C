#include<stdio.h>
int main(){
    int a,b,rem,base=1,c=0,d=0;
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        d=d+rem*base;
        base=base*2;
        a=a/10;
    }
    base=1;
    while(d>0){
        rem=d%8;
        c=c+rem*base;
        base=base*10;
        d=d/8;
    }
    printf("%d",c);
}
    