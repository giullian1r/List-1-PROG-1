/*
  ler um número N e um vetor de N inteiros
  Escrever o vetor na saída no formato [n1 n2 n3 …]
  Inverter o vetor e imprimi-lo: [… n3 n2 n1] (inverter antes de imprimir)
*/

#include<stdio.h>

int main(){
  int inteiros[200];
  int tam;

  printf("digite o tamanho do vetor: ");
  scanf("%d", &tam);

  for(int i= 0; i < tam; i++){
    printf("digite um numero: \n");
    scanf("%d", &inteiros[i]);
  }

  //print
  for(int i = 0; i < tam; i++){
    printf("%d ",inteiros[i]);
  }

  //inverted 
  int end = tam - 1;
  for(int i = 0; i < tam / 2; i++, end--){
    int aux = inteiros[i];
    inteiros[i] = inteiros[end];
    inteiros[end] = aux;
  }

  printf("\n");

  //print
  for(int i = 0; i < tam; i++){
     printf("%d ",inteiros[i]);
   }
}
