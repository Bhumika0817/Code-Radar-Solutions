#include<stdio.h>
int main(){
    unsigned int num;
    scanf("%u", &num);
    unsigned int flip= ~num;
    printf("%u", flip);
    return 0;

}