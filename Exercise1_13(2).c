#include <stdio.h>
#include <stdlib.h>

//Exercise 1-13 solution from Learn to solve it

int main(void)
{
	int c;

	while((c=getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
			putchar('\n');
		else
			putchar('*');
	}
}