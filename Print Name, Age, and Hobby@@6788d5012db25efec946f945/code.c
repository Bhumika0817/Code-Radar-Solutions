#include<stdio.h>
int main(){
    char str[100];
    scanf("%s", &str);
    int age;
    scanf("%d", &age);
    char hobby[100];
    scanf("%s", &hobby);
    printf("Name: %s\n", str);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);
    return 0;
}