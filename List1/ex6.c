#include<stdio.h>

int main(){
	int num;
	printf("digite um n: \n");
	scanf("%d", &num);

	int result;
	int current = 1;
	int prev = 1;

	printf("1,1");
	//começar com 1 propositalmente
	for(int i= 0; i < num - 2; i++){
		result = prev + current;
		prev = current;
		current = result;

		printf( ",%d", result);
	}
}
