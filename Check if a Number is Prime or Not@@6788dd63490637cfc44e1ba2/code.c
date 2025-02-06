#include<stdio.h>
int main(){
    int number,i;
    scanf("%d", &number);

    if(number<=1){
        printf("Not Prime");
    }else{
        for(i=2; i<number; i++){
            if(number%i==0){
                printf("Not Prime");
                return 0;
            }
        }
        printf("Prime");
    }
    return 0;
}