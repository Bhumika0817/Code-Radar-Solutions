#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("Average: %.2lf", (a+b+c)/3);
    return 0;
}