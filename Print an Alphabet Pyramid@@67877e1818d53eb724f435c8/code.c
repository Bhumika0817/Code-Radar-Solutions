#include<stdio.h>
int main(){
    int i,j,n,space;
    scanf("%d", &n);
    for(i=0; i<=n; i++){
        for(space=1; space<=n-i; space++){
            printf(" ");
        }
        for(j=0; j<=i; j++){
            printf("%c ", 'A' +j);
        }
        printf("\n");
    }
    return 0;
}