#include<stdio.h>
int main(){
    unsigned int num;
    scanf("%u", &num);

    if(num & 1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}