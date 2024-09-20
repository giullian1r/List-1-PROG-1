/* Sequencia de numeros
   Faca um programa em C que leia do teclado uma sequˆencia de n´umeros
inteiros at´e que seja lido um n´umero que seja o dobro ou a metade do anteri-
ormente lido. O programa deve imprimir na sa´ıda trˆes n´umeros inteiros que
s˜ao, respectivamente, a quantidade de n´umeros lidos, a soma dos n´umeros
lidos e os dois valores que for¸caram a parada do programa. */

#include<stdio.h>
#include<stdbool.h>

int main(){

	bool repeat = true;
	int sum = 0;
	int count = 0;
       	int prev = 0;
	int num;

	printf("digite : \n");
	while(repeat){
		scanf("%d",&num);

		sum += num;
		count++;

		if((prev == num / 2) || (prev == num * 2)){
			repeat = false;
			continue;
		}	
		prev = num;
	}
	printf("%d %d %d %d", count,sum,prev,num);
}
