#include <stdio.h>

int main() {
    int x,y;
    printf("enter a value: ");
    scanf("%d", &x);
    printf("enter another value: ");
    scanf("%d", &y);
    printf("%d \n", x>5 && y<10);
    printf("%d \n", x==10 || y==5);
    printf("%d \n", !(x==y));
    
}

