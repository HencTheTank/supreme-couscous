/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/
#include <stdio.h>
main(){
	int c,state;
	state = 0;
	while((c=getchar()) != EOF){
		if(state == 0) {
		putchar(c);
		if(c = ' ') state = 1;
		} else {
			if(c != ' '){
				putchar(c);
				state = 0;
			}
		}

	}
}
