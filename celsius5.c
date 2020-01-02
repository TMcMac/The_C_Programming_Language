#include <stdio.h>


#define UPPER 300
#define LOWER 0
#define STEP 5

int main()
{
	float cels;
	printf("Fahrenheit\t Celsius\n");
	for (cels = 0; cels <= UPPER; cels = cels + STEP) {
		printf("%3.0f \t %6.1f\n", cels, (cels * (9.0/5.0))+32);
	}
}