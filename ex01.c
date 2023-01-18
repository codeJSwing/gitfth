#include <stdio.h>

int main(){
	int N = 3;

	for(int i = 0; i < N; i++){
		for(int j = N - (i + 1); j > 0; j--){
			printf(" ");
		}

		for(int k = 0; k < (2 * (i + 1) - 1); k++){
			printf("*");
		}


		printf("\n");
	}

}
