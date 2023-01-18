#include <stdio.h>

int main(){
	int t1 = 1;
	int t2 = 1;
	int nextTerm = 0;
	int sum = 0;
	int totalTerm = 1000;
	
	for(int i = 0; i < totalTerm; ++i){
		if(t1 % 2 == 0){
			sum += t1;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("1000000이하의 피보나치 수열 짝수의 합 : %d \n", sum);

	return 0;
}
