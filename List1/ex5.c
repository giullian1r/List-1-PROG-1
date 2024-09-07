#include<stdio.h>

int main(){

	int num, total, rest;
	int sum = 0;

	printf("digite um numero \n");
	scanf("%d", &num);

	total = num * 37;

	while(total != 0){
		rest = total % 10;
		total = total / 10;
		sum += rest; 
	}
	if(sum == num){
		printf("SIM \n");
	}
	else{
		printf("NAO \n");
	}
}
