#include<stdio.h>
int main(){
    int i,j,n,space;
    for(i=1; i<=n; i++){
        for(space=1; space<=n; space++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%c ", 'A' +j);
        }
        printf("\n");
    }
    return 0;
}