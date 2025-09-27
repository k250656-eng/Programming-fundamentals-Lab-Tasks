#include <stdio.h>
int main(){
int a,b,c;
printf("enter three numbers ie a b c (eg. 2 3 5): "); 
scanf("%d %d %d", &a, &b, &c);
if (a>b){
	if (a>c)
	printf("%d is the largest", a);
	else
	printf("%d is the largest", c); }
else {
	if (b>c)
	printf("%d is the largest", b); 
	else printf("%d is the largest", c);}
}



