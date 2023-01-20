#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	int result = 0;

	for(int i = 0; i < N; i++){
		result = 1 * (i + 1);
		printf("1 x %d = %d \n", (i + 1), result);
	}
	return 0;
}
