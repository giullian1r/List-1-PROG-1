#include<stdio.h>

int main(){
	int num;
	int fat = 1;

	printf("digite um numero: \n");
	scanf("%d", &num);

	for(int i = num; i > 0; i--){
		fat = fat * i;
	}
	printf("%d", fat);
}

