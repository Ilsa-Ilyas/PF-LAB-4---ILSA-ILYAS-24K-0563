#include <stdio.h>
int main () {
	int Num1;
	int Num2;
	printf("Enter Num1: \n");
	scanf("%d", &Num1);
	printf("Enter Num2: \n");
	scanf("%d", &Num2);
	if (Num1>Num2) {
		if(Num1>100) {
			printf("First number is significantly larger");
		}
		else {
			printf("First number is larger");
		}
	}else if(Num1<Num2) {
		if(Num1<0) {
			printf("First number is negative and smaller");	
		}
		else {
			printf("First number is smaller");
		}
	}else printf("Both numbers are equal");
	return 0;
}

