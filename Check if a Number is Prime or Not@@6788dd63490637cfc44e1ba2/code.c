#include<stdio.h>
int main(){
    int num,i;
    scanf("%d", &n);

    if(num<=1){
        printf("Not Prime");
    }else{
        for(i=2; i<num; i++){
            if(num%i==0){
                printf("Not Prime");
                return 0;
            }
        }printf("Prime");
    }
    return 0;
}