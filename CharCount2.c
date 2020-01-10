#include <stdio.h>
#include <stdlib.h>

/* Count the characters in an input, version 2*/

int main() 
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}