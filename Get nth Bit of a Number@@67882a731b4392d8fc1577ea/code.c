#include<stdio.h>
int main(){
    i=unsigned int num,n;
    scanf("%u", &num);

    scanf("%u", &n);

    if(num &(1U<<n)){
        printf("0");
    }else{
        printf("1");
    }
}