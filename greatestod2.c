#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a is greater");
    }
    else if(b>a){
        printf("a is greater");
    }
    else{
        printf("Both equal");
    }
}