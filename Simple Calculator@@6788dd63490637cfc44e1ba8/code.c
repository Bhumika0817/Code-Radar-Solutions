#include<stdio.h>
int main(){
    int a,b,result;
    scanf("%d %d", &a, &b);
    char op;
    scanf(" %c", &op);
    switch(op){
        case '+': result= a+b;
                  printf("%d", result);
                  break;
        case '-': result= a-b;
                  printf("%d", result);
                  break;
        case '*': result= a*b;
                  printf("%d", result);
                  break;
        case '/': if(b!=0){
            result= a/b;
                  printf("%d", result);
        }else{
            printf("error")
        }
                  break;
        
    }
}