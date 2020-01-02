#include <stdio.h>

/* A simple program to print out a table of Fahrenheit to Celsius values*/

int fahr, cels;

int main () {
	printf("Fahrenheit   Celsius\n");

	for (fahr = 300; fahr >= 0; fahr = fahr - 10) {
		cels = (fahr*(5.0/9.0)) - 32;
		printf("%6d %6.1d\n", fahr, cels);
	}
}