#include<stdio.h>
int main(){
    int a,rem,i,count;
    scanf("%d",&a);
    for( i=1;i<=a;i++){
         count=0;
         int temp=i;
        while(temp!=0){
            rem=temp%10;
            if(rem==3){
                count++;
              }
            temp=temp/10;
            }
            printf("%d in number of 3 present is %d \n",i ,count);
    }
}