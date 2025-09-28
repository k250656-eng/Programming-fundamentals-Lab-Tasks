#include <stdio.h>

int main() {
    int a,b,result;
    printf("enter an integer value: ");
    scanf("%d", &a);
    printf("enter another integer value: ");
    scanf("%d", &b);
    result= a+b/3 * 10 - (a+b);
    printf ("%d", result);
}

