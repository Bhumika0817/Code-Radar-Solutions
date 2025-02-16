#include<stdio.h>
int main(){
    unsigned int num,n;
    scanf("%u %u", &num, &n);
    num= num & ^(1U<<n);
    printf("%u", num);
}