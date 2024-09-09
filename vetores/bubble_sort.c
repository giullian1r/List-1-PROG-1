#include<stdio.h>

int main(){
    int v[200] = {1,3,6,2,9,4,5,8,7};
    int tam = 9;
    int aux;

    for(int i = 0; i < tam - 1; i++){
        for(int j = i; j < tam - 1; j++){
            if(v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    for(int i = 0; i < tam; i++){
        printf("%d ", v[i]);
    }
}
