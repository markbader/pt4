# include <stdlib.h>
# include <stdio.h>

void sieve(int numbers[], int n){
	int i, j;
	for (j=1; j<=n; j++){
		for (i=1;i<=j;i++){
			if (i+j+2*i*j<=n){
				numbers[(i+j+2*i*j)-1]=0;
			}
		}
	}
	for (i=0; i<n; i++){
		if (numbers[i]){
			printf("%d\n", numbers[i]*2+1);
		}
	}
}

int main(int argc, char * argv[]){
	if (argc<2){
		return 1;
	}
	int i;
	int n = (atoi(argv[1])%2 == 0) ? (atoi(argv[1])/2)-1 : atoi(argv[1])/2;
	if (atoi(argv[1])>=2){
		printf("2\n");
	}
	int numbers[n];
	for (i=1; i<=n; i++){
		numbers[i-1]=i;
	}
	sieve(numbers, n);
	return 0;
}
