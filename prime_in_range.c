#include<stdio.h>
int main(){
    int s,d,count=0,i,prime;
    scanf("%d%d",&s,&d);
    for(int i=s;i<=d;i++){
        prime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                prime=0;
            }
        }
        if(prime){
        printf("%d ",i);
        }
    }
}