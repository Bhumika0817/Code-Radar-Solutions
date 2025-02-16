#include<stdio.h>
int lowest(int n){
    return __builtin_ctz(n);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", lowest(n));
    return 0;
}