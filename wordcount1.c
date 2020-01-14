#include <stdio.h>

//constants like these should always be clear and near the top
#define IN 1 //inside a word
#define OUT 0 //outside a word

//count lines, words, and characters in input

main () 
{
	//ints for c, new line, new word, new char, and state
	int c, nl, nw, nc, state;

	//we start off assuming we are not in a word yet
	state = OUT;

	//our counts all start at zero
	nl = nw = nc = 0;

	//while c isnt at the end of the file, count a new char.
	while((c = getchar()) != EOF) {
		++nc;
		//if c encounters a new line count it
		if (c == '\n')
			++nl;
		//if c is a space, new line, or tab we are not in a word
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		//else we are in a word, count it
		else if (state == O) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}