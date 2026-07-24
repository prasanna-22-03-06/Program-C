#include<stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>0 && y>0){
        printf("lies on 1st quadrant +x,+y");
    }
    else if(x<0 && y>0){
        printf("lies on 2nd quadrant -x,+y");
    }
    else if(x<0 && y<0){
        printf("lies on 3rd quadrant -x,-y");
    }
    else if(x>0 && y<0){
        printf("lies on 4th quadrant +x,-y");
    }
    else if(x==0 && y==0){
        printf("lies on origin");
    }
    else if(x==0){
        printf("lies on y axis");
    }
    else if(y==0){
        printf("lies on x axis");
    }
}