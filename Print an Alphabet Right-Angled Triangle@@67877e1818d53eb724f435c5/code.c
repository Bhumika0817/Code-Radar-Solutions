#include<stdio.h>
int main(){
    int n;
    char i,j;
    scanf("%d", &n);

    for(i='A'; i<='Z'; i++){
        for(j='A'; j<='Z'; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}