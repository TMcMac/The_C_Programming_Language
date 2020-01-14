#include <stdio.h>

//count the digits, white spaces, others

int main()
{
	int c, i, nwhite, nother;
	int ndigit[10]; //a ten digit array to store our counts

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i) //this will cycle through our array one position at a time
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')//determins if c is a numeric digit
			++ndigit[c - '0']; //if it is the numeric value is c - the value of a Zero in ASCII
		else if (c == ' ' || c == '\n' || c == '\t') //is c any type of whitespace?
			++nwhite;
		else //if not a digit and not white space than it is an other
			++nother;

	printf("digits =");
	for (i = 0; i < 10; ++i)
	{
		printf(" %d\n", ndigit[i]);
	}
	printf(", whitespace = %d, other = %d\n", nwhite, nother);
}