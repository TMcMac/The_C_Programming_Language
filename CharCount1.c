#include <stdio.h>
#include <stdlib.h>

/* Count the characters in an input, version 1*/

int main() {
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}