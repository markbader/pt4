#include <stdlib.h>
#include <stdio.h>

int main (){
	int input;
	int state = 0; /* 0 - whitespace, 1 - word */
	int line = 1;
	int character = 0;
	int word = 0;
	while((input = getchar()) != EOF){
		switch (input) {
			case 32:/*@fallthrough@*/
			case 9:	if (state == 1){
					word++;
					state = 0;
				}
				character++;
				break;
			case 10:if (state == 1) {
					word++;
					state = 0;
				}
				line ++;
				break;
			default:state = 1;
				character++;
				break;
		}
	}
	if (state == 1) {
		word++;
	}
	printf("%d %d %d\n", line, word, character);
	return 0;
}
