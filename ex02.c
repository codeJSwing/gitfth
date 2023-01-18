#include <stdio.h>

int main(){
	int N = 3;

	for(int i = 0; i < N; i++){
		for(int k = (N - i); k < N; k++){
			printf(" ");
		}
		for(int j = 0; j < (5 - i * 2); j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
