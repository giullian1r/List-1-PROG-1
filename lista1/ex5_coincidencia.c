/* Coincidencia
   Se multiplicarmos 37 por alguns n´umeros, obteremos n´umeros cujos al-
garismos, quando somados, resultam no mesmo n´umero que foi multiplicado
pelo 37. Por exemplo, se tomarmos o n´umero 15, multiplicando-o por 37,
obtemos 555. Somando-se 5 + 5 + 5 resulta em 15.
Fa¸ca um programa em C que leia um n´umero inteiro positivo do teclado,
calcule o resultado da multiplica¸c˜ao por 37, some os algarismos do resultado,
compare essa soma com o n´umero lido e imprima ”SIM”se h´a coincidˆencia
ou ”NAO”se n˜ao h´a coincidˆencia. */

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
