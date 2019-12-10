#include <stdio.h>
/* A simple program to show a conversion table of Fahrenheit into Celsius */


int main () {
	float fahr, cels;
	int lower = 0;
	int upper = 300;
	int step = 20;

	fahr = lower;
	printf("Fahrenheit  Celsius\n");
	while (fahr <= upper) {
		cels = (5.0/9.0) * (fahr-32.0);
		printf("%6.0f      %6.1f\n", fahr, cels);
		fahr = fahr+step;
	}


}