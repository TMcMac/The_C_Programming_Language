#include <stdio.h>
/* A simple program to show a conversion table of Fahrenheit into Celsius */


int main () {
	float fahr, cels;
	int lower = 0;
	int upper = 300;
	int step = 20;
	fahr = 0;

	cels = lower;
	printf("Celsius   Fahrenheit\n");
	while (cels <= upper) {
		fahr = (cels * (9.0/5.0))+32.0;
		printf("%6.0f      %6.1f\n", cels, fahr);
		cels = cels+step;
	}


} 