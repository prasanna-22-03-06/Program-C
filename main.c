#include <stdio.h>
int main(){
    int a,b,r,sum=0,fac,i;
    scanf("%d", &a);
    b=a;
    while(b!=0) {
        r=b%10;
        fac=1;
        for (i = 1;i<=r;i++){
            fac=fac*i;
        }
        sum=sum+fac;
        b=b/10;
    }
    if(sum==a){
        printf("it is a Strong Number");
    }
    else{
        printf("it is not a Strong Number");
    }
}