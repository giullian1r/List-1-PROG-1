#include<stdio.h>

int main(){
    int vec[200];
    int tam;

    printf("digite o tamamho do vetor: ");
    scanf("%d", &tam);

    for(int i= 0; i < tam; i++){
        printf("digite um numero");
        scanf("%d", &vec[i]);
    }

    double media;
    for(int i= 0; i < tam; i++){
       media += vec[i]; 
    }
    media = media / tam;
    printf("media: %.2f \n", media);


}
