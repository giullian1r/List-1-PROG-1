/* Numero triangular 

   Um n´umero inteiro positivo ´e dito triangular se seu valor ´e o produto de
trˆes n´umeros naturais consecutivos. Por exemplo, o n´umero 120 ´e triangular
porque 120 = 4 x 5 x 6 .
Fa¸ca um programa em C que leia do teclado um n´umero inteiro positivo
n e verifique se ele ´e triangular ou n˜ao. Se for, imprima 1 e se n˜ao for,
imprima 0. */

#include<stdio.h>

int main(){
	int n;
	int isTriangle = 0;

	printf("digite um numero inteiro positivo \n");
	scanf("%d",&n);

		for(int i = 1; i * (i+1) * (i+2) <= n; i++){
		if(i * (i + 1) * (i + 2) == n){
			isTriangle = 1;
			break;
		}
	}
	printf("%d\n",isTriangle);
}
