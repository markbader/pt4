# include <string.h>
# include <stdio.h>

int is_palindrome(char s[]){
	int i, j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		if (s[i] != s[j]){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 1;
}

int main(int argc, char * argv[]){
	if (argc < 2){
		return 1;
	}
	int i, c, y;
	for (i=1; i<argc; i++){
		is_palindrome(argv[i]);
	}
	return 0;
}
