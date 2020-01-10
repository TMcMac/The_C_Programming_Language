 #include<stdio.h>
 int main()
 {
     int c, t, nl, b;
     while ((c = getchar()) != EOF) {
     	putchar(c);
     	if (c == '\t') {
     		++t;
     	} else if (c == '\n') {
     		++nl;
     	} else if (c == '\b') {
     		++b;
     	} else {
     		;
     	}
     }
      
     return 0;
 }