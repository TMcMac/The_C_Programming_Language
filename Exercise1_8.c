 #include<stdio.h>
//A small program to count Tabs, New Lines, and Blanks. 
 int main()
 {
     int c, t, nl, b;
     while ((c = getchar()) != EOF) {
     	putchar(c);
     	if (c == '\t') {
     		++t;
     	} else if (c == '\n') {
     		++nl;
     	} else if (c == ' ') {
     		++b;
     	} else {
     		;
     	}
     }
     printf("Tabs:%d\nNew Lines:%d\nSpaces:%d\n", t, nl, b);
     return 0;
 }