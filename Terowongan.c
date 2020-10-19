#include <stdio.h>
int main(){
    int i,volume,n,length[100],width[100],height[100];
    scanf("%d",&n);
    if(1<=n && n<=100){
        for(i=1;i<=n;i++){
            scanf("%d %d %d",&length[i],&width[i],&height[i]);
            }
        for(i=1;i<=n;i++){
            if(height[i]>=41){
                printf("");
                    }
            else{
                volume = length[i]*width[i]*height[i];
                printf("%d\n",volume);
                }
            }


    }
    else{
        return 0;
        }
return 0;
}