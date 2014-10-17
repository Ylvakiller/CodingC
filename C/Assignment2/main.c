#include <stdio.h>

int main( void )
{
	int amount1;

	printf("How many numbers do you want to have in the first array?\n");
	scanf("%d", &amount1);
	printf("Please enter your numbers, seperated by an enter:\n");
	int i = 0;
	float one[amount1];
	while(i<amount1){
		scanf("%f", &one[i]);
		i++;
	}
	
	int amount2;
	printf("And how many in the second array?\n");
	scanf("%d", &amount2);
	float two[amount2];
	printf("Enter your second set of numbers please:");
	i=0;
	while (i<amount2){
		scanf("%f", &two[i]);
		i++;
	}
	
	
	
	//printf("%d\n", amount);

	return 0;
}