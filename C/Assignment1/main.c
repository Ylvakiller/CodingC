#include <stdio.h>
void print_function( char letter );
int ctr;
int main( void )
{
	char star = '*';
	char dash = '-';
	for (ctr = 0 ; ctr < 10; ctr++ ) {
		print_function( star );
		print_function( dash );
		printf("\n");
	}
	return 0;
}
void print_function ( char letter )
{
	int ctr;
	for ( ctr = 0; ctr < 9; ctr++) {
		printf("%c", letter);
	}
}
//The programming error was that both the for loop in the main function aswell as the for loop in the print_function where using the same global variable, because of this only 1 line would be printed.
//In order to solve this I gave the print_function a local variable, it now does print 10 lines.
//The program in the print_function will print 9 characters of the type given to it