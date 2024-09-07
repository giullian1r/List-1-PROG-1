/* Fatorial
   Faca um programa em C que leia um valor inteiro n ≥ 1 do teclado e
em seguida imprima o valor de n!.
Observa¸c˜ao: a fun¸c˜ao fatorial cresce muito rapidamente, ent˜ao para valo-
res relativamente pequenos de n j´a pode haver overflow, por isso teste seu
programa para valores n˜ao muito grandes. */

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

