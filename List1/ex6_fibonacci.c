/* Fibonacci
   Faca um programa em C que leia um n´umero inteiro n ≥ 1 do teclado e
que imprima em seguida os n primeiros n´umeros da sequˆencia de Fibonacci.
Observa¸c˜ao: Os valores desta sequˆencia crescem muito rapidamente, ent˜ao
para valores relativamente pequenos de n j´a pode haver overflow, por isso
teste seu programa para valores n˜ao muito grandes.*/

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
