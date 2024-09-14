#include <stdio.h>
int main()
{
	int units;
	int remaining_units;
	float bill = 0.0;
	float surcharge;
	printf ("Enter electricity unit charges: ");
	scanf ("%d", &units);
	if (units <=30) {
		bill = units*0.60;
	}
	else if (units <=110) {
		bill = 30*0.60;
		remaining_units = units-30;
		bill += remaining_units*0.85;
	}
	else if (units <=210) {
		bill = 30*0.60;
		remaining_units=80;
		bill += remaining_units*0.85;
		remaining_units = units-110;
		bill += remaining_units*1.30;
	}
	else (units <=320);
		bill = 30*0.60;
		remaining_units=80;
		bill += remaining_units*0.85;
		remaining_units = 100;
		bill += remaining_units*1.30;
		remaining_units = units-210;
		bill += remaining_units*1.60;
	
	surcharge = bill*0.15;
	bill+= surcharge;
	
	printf("Total Electricity Bill: Rs. %.2f\n", bill);
	
	return 0;
}