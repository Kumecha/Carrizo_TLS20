#include <stdio.h>
int main(){
    int x1,x2,v1,v2;
    scanf(" %d %d %d %d",&x1,&v1,&x2,&v2);

    if(x1<0 && x2<0){
        printf("invalid");
    }
    else if (v1<1 && x2<1){
        printf("invalid");
    }
    else {
        while(x1!=x2){
            x1 = x1 + v1;
            x2 = x2 + v2;
        if(x1==x2){
            printf("YES");
            break;
        }
        if(x1>1000 || x2>1000){
            printf("NO");
            break;
        }
        }
    }
return 0;
}