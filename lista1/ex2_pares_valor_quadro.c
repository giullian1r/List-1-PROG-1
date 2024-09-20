/*Pares valor-quadrado

  A defini¸c˜ao de uma s´erie de pares Valor-Quadrado em Matem´atica ´e
dada pela presen¸ca de elementos num´ericos, organizados em sequˆencias dois-
a-dois, em que cada n´umero ´e seguido de seu quadrado exatamente uma vez
(veja os exemplos abaixo).
Fa¸ca um programa em C que leia do teclado uma sequˆencia com uma
quantidade arbitr´aria de valores inteiros positivos. A sequˆencia termina com
o valor 0, que serve para indicar o final da entrada de dados e n˜ao dever´a
ser processado. O programa deve determinar e imprimir se a s´erie ´e ou n˜ao
do tipo Valor-Quadrado imprimindo 1 caso seja e 0 caso n˜ao seja.*/


#include<stdio.h>
int main(){
	int repeat = 1;
	int isQuad = 1;
	int n,quad;

	while(repeat == 1){
		printf("digite um numero em seguida o seu quadrado");
		scanf("%d",&n);

		if(n == 0){
			repeat = 0;
			continue;
		}
		scanf("%d",&quad);

		if(n * n != quad){
			isQuad = 0;
		}
	}
	printf("%d",isQuad);
}
