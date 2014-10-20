#include <stdio.h>

void sortArray(void);
int main(int argc, char **argv)
{
	printf("Hello there, I will give you a couple of options:\n");
	_Bool running = 1;
	while(running){
		printf("You can terminate this program at any time by entering a negative number.\n");
		printf("Otherwise you have the following options:\n");
		printf("Option number 2: Sort some arrays\n");
		printf("All other non-negative inputs will just be confirmed.\n");
		printf("Meaning that these are just dummy procedures...\n");
		printf("Please enter your number now:\n");
		int input;
		scanf("%d", &input);
		if(input<0){
			printf("Terminating program.\n");
			running=0;
		}else if(input==2){
			printf("Sorting arrays.\n");
			sortArray();
		}else{
			printf("%d\n",input);
		}
	}
	return 0;
}

void sortArray(){
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
	printf("Enter your second set of numbers please:\n");
	i=0;
	while (i<amount2){
		scanf("%f", &two[i]);
		i++;
	}
	i=0;
	if(amount1>=amount2){
		float final[amount1];
		while (i<amount2){
			if (one[i]>two[i]){
				final[i]=one[i];
			}else{
				final[i]=two[i];
			}
			i++;
		}
		while(i<amount1){
			final[i]=one[i];
			i++;
		}
		printf("Sorting this whole array gives:\n");
		i=0;
		while (i<amount1){
			printf("%f\n", final[i]);
			i++;
		}
	}else{
		float final[amount2];
		while (i<amount1){
			if (one[i]>two[i]){
				final[i]=one[i];
			}else{
				final[i]=two[i];
			}
			i++;
		}
		while(i<amount2){
			final[i]=two[i];
			i++;
		}
		printf("Sorting this whole array gives:\n");
		i=0;
		while (i<amount2){
			printf("%f\n", final[i]);
			i++;
		}
	}
}
