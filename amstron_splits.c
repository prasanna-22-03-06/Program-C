#include<stdio.h>
int main(){
    int a,b,t,z,r;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        t=i;
        z=0;
        while(t!=0){
            r=t%10;
            z=z+(r*r*r);
            t=t/10;
        }
        if(z==i){
            printf("%d ",z);
        }
    }
}