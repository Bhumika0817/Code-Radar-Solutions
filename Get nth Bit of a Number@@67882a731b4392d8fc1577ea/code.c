#include<stdio.h>
int main(){
    unsigned int num,n;
    scanf("%u", &num);

    scanf("%u", &n);

    if(num &(1U<<n)){
        printf("1");
    }else{
        printf("0");
    }
}