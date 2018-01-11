#include <stdlib.h>
#include <stdio.h>

int main (){
	char input;
	int state = 0; //0 - whitespace, 1 - word
	int line = 1;
	int character = 0;
	int word = 0;
	while((input = getchar()) != EOF){
		switch (input) {
			case ' ':/*@fallthrough@*/
			case '\t': character++;/*@fallthrough@*/
			case '\n': line ++; (state == 0) ? state=0 : word++; break;
			default: state = 1; character++;break;
		}
	}
	if (state == 1) {
		word++;
	}
	printf("%d %d %d\n", line, word, character);
	return 0;
}
