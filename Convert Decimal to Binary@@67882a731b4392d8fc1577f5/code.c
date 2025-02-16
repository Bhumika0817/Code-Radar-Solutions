#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int started=0;
    if(num==0){
        printf("0");
        return 0;
    }
    for(int i=31; i>=0; i--){
        if((num>>i)&1){
            printf("1");
            started=1;
        }else if(started){
            printf("0");
        }
    }
    return 0;
}