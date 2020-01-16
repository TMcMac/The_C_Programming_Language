#include <stdio.h>

const int UPPER = 300;
const int LOWER = 0;
const int STEP = 5;
const float x = (9.0/5.0);

float convr(int cels);

float cels, fahr = 0;

int main()
{
  printf("Celsius \t Fahrenheit\n");
  do {
    printf("%3.2f \t\t %3.2f\n", cels, convr(cels));
    cels = cels + STEP;
  } while (cels < UPPER);
  return 0;
};


float convr (cels)
{
  fahr = (x  * cels) + 32;
  return fahr;
};
