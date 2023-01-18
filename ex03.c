#include <stdio.h>

int main(){
	int i = 1;
	int result = 0;

	while(i <= 1000){
		i++;

		if(i % 3 == 0 || i % 5 == 0){
			result += i;
		}
	}
	printf("1000이하의 3 또는 5의 배수인 수 들의 합 : %d \n", result);

	return 0;
}
