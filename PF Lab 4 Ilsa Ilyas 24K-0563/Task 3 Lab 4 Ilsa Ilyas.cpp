#include <stdio.h>
int main()
{
	float cost;
	float discount=0.0;
	float amount_saved;
	float final_amount;
	printf ("Enter the total cost of items: ");
	scanf ("%f", &cost);
	
	if (cost<1500) {
		discount=0.07;
	}
	else if (cost>=1500 && cost<=3000) {
		discount=0.12;
	}
	else if (cost>=3000 && cost<=5000) {
		discount=0.22;
	}
	else (cost>5000); {
		discount=0.30;
	}
	
	amount_saved=cost*discount;
	final_amount=cost-amount_saved;
	
	printf("Original amount: Rs. %.2f\n", cost);
	printf("Amount saved from discount: Rs. %.2f\n", amount_saved);
	printf("Final amount after discount: Rs. %.2f\n", final_amount);

return 0;
}