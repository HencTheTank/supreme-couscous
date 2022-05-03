/* Write a program to count blanks,tabs, and newlines. */
#include <stdio.h>
main(){
	int c,blk,tb,nl;
	blk = tb = nl = 0;
	while((c=getchar()) != EOF){
		if(c == ' ') ++blk;
		if(c == '\t') ++tb;
		if(c == '\n') ++nl;
	}
	printf("\nblanks:%d\ntabs:%d\nlines:%d\n",blk,tb,nl);
}
