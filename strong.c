#include<stdio.h>
int main(){
    int a,b,c,r,f,i;
    scanf("%d",&a);
    a=b;
    while(a!=0){
        r=a%10;
        f=1;
        c=0;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        c=c+f;
        a=a/10;
    }
    printf("%d",c);
}