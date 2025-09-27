#include <stdio.h> 
int main(){
int a,b;
printf("enter two numbers a and b (eg. 2 4): ");
scanf("%d %d", &a,&b);
printf("a&b: %d\n", a&b);
printf("a|b: %d\n", a|b);
printf("a b: %d\n", a^b);
printf("~a: %d\n", ~a);
printf("a<<1: %d\n", a<<1); 
printf("a>>1: %d\n", a>>1); }
