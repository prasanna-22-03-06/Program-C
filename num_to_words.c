#include<stdio.h>
int main(){
    int a,sum=0,rem,re,su=0;
    scanf("%d",&a);
    while(a!=0){
           rem=a%10;
           sum=sum*10+rem;
           a=a/10;
    }
    while(sum!=0){
    re=sum%10;
    su=su*10+re;
        switch(re){
            case 0:
                printf("zero");
                break;
            case 1:
                printf(" one");
                break;
            case 2:
                printf(" two");
                break;
            case 3:
                printf(" three");
                break;
            case 4:
                printf(" four");
                break;
            case 5:
                printf(" five");
                break;
            case 6:
                printf(" six");
                break;
            case 7:
                printf(" seven");
                break;
            case 8:
                printf(" eight");
                break;
            case 9:
                printf(" nine");
                break;
        }
        sum = sum/10;
    }
}