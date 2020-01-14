#include <stdio.h>


#define UPPER 300
#define LOWER 0
#define STEP 5

int main()
{
	float cels, fahr;
	fahr = 300;
	cels = (fahr * (5/9)) - 32;
	printf("Fahrenheit\t Celsius\n");

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
		printf("%3.0f \t %6.1f\n", fahr, cels);
	}
}