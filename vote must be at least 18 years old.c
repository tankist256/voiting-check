#include <stdio.h>
int main() {
    int age;
    printf("enter your age ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("you can");
    } else {
        printf("you can't");
    }
    return 0;}