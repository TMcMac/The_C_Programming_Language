#include <stdio.h>

//count the digits, white paces, and and others chars in a program

int main () 
{
	int c, i, nwhite, nother;
	int w, x = 0;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		putchar(c);
		if (c == ' ' || c == '\n' || c == '\t')
			for (w = 0; w <= x; w++)
				printf("/");
				if (w == x)
					printf("\n");
					x = 0;
		else
			x++;

	printf("White Spaces:");
	for (i = 0; i <= nwhite; i++)
		printf("/");
	
	printf("\nOther Characters:");
	for (i = 0; i <= nother; i++)
		printf("/");
	
	printf("\n");

}