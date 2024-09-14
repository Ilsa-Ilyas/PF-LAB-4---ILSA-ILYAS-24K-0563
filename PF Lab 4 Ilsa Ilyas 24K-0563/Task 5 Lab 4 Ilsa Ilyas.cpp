#include <stdio.h>
main () {
	int hour;
	printf("Enter time in 24-hour format: ");
	scanf("%d", &hour);
	
	if (hour<0 || hour>23) {
		printf("Invalid Time. Retry. \n");
	}
	if (hour>=6 && hour<12) {
		printf("Good Morning. \n");
	}
	else if(hour>=12 && hour<18){
		printf("Good Afternoon. \n");
	}
	else if(hour>=18 && hour<24){
		printf("Good Evening. \n");
	}
	else {
		printf("Good Night. \n");
	}
	return 0;
}