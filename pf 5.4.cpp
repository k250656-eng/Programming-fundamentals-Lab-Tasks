#include <stdio.h>

int main() {
    int m,n,result;
    printf("enter an integer value: ");
    scanf("%d", &m);
    printf("enter another integer value: ");
    scanf("%d", &n);
    (m > n) ? printf("%d is greater than %d\n", m, n) : printf("%d is greater than %d\n", n, m);
}

