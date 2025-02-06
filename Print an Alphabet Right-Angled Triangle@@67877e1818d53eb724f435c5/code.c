#include<stdio.h>
int main(){
    int n;
    char i,j;
    scanf("%d", &n);

    for(i='A'; i<=n; i++){
        for(j='A'; j<=i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}