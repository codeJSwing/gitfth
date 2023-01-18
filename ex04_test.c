#include <stdio.h>

int main(){
	int t1 = 1;
	int t2 = 1;
	int nextTerm = 0;
	int sum = 0;
	
	for(int i = 0; i < 8; i++){
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		
		if(t1 % 2 == 0){
			printf("짝수 : %d \n", t1);
			sum += t1;
		}
	}
	printf("1000000이하의 피보나치 수열 짝수의 합 : %d \n", sum);

	return 0;
}
