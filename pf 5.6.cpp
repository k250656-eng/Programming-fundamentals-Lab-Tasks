#include <stdio.h>
int main(){

int a,b,c;
printf("enter three numbers (eg. 2 5 3): "); 
scanf("%d %d %d", &a, &b, &c);
int largest = (a>b)? ((a>c)? a:c): ((b>c)?b: c); 
printf("largest number is %d", largest); }
