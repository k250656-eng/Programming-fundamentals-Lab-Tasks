#include <stdio.h> 
int main (){
int num;
char grade;
printf("enter a course number: ");
scanf("%d", &num); 
switch(num) {
	case 1:
	case 2:
	case 3:
		printf("enter grade: "); 
		scanf(" %c", &grade); 
switch (grade) {
	case 'A':
		printf("excellent performance in course %d", num); break;
	case 'B':
		printf("good performance in course %d", num); break;
	case 'C':
		printf("decent performance in course %d", num); break;
	case 'D':
		printf("you need to work harder in course %d", num); break;
	case 'F':
	    printf("you have failed in course %d", num); break;
	default: printf("you entered an invalid grade"); break; }
	break;
		
default:
printf("you entered an invalid course number"); }
}

