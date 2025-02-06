#include<stdio.h>
int main(){
    float a,b,result;
    scanf("%f %f", &a, &b);
    char op;
    scanf(" %c", &op);
    switch(op){
        case '+': result= a+b;
                  printf("%.0f", result);
                  break;
        case '-': result= a-b;
                  printf("%.0f", result);
                  break;
        case '*': result= a*b;
                  printf("%.0f", result);
                  break;
        case '/': if(b!=0){
            result= a/b;
                  printf("%.0f", result);
        }else{
            printf("Error");
        }
                  break;
        default : printf("Invalid");
    }
    return 0;
}