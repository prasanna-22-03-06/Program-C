#include<stdio.h>
int main(){
    int a,b,t,m;
    scanf("%d%d",&a,&b);
    if(a>b){
        t=a;
    }
    else{
        t=b;
    }
    while(1){
        if(a%10==0 && b%10==0){
            printf("%d",m);
            break;
        }
        m=t;
    }
}