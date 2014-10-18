#include <stdio.h>

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
			printf("Sorting arrays./n");
		}else{
			printf("%d\n",input);
		}
	}
	return 0;
}
