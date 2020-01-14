#include <stdio.h>


main() 
{
	int c, i, j;

	while ((c = getchar()) != EOF)
	{
		putchar(c);
		i++;

		if (c == ' ' || c == '\t' || c == '\n')
		{
			for (j = 0; j <= i; j++)
			{
				printf("\\");
			};
		printf("\n");
		i = 0;
		}

	}
}

