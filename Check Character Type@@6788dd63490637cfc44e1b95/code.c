#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            printf("Vowel");
            break;
            default: printf("Consonant");
        }
    }else if(isdigit(ch)){
            printf("Digit");
        }
        else{
            printf("Special Character");
        }
        return 0;
}