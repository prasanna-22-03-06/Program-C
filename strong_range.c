#include<stdio.h>
int main(){
    int a,b,c,rem,f,i;
    scanf("%d",&a);
    for(int n=1;n<=a;n++){
        int temp=n;
        c=0;
        while(temp!=0){
            rem=temp%10;
            f=1;
        for(int i=1;i<=rem;i++){
            f=f*i;
            }
            c=c+f;
            temp=temp/10;
        }
        if(n==c){
        printf("%d its strong number.",c);
        }
    }
}