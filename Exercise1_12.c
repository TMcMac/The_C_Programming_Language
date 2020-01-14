#include <stdio.h>

//a simple program to print one word of an input per line.

int c, w;

int main () {
	//while c is not equal to end of file, put the next char into c
	while((c = getchar()) != EOF) {
		putchar(c);
		//if c is a space
		if (c == ' ') {
			printf("\n");
		};
	}
	return 0;
}