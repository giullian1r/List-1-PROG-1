#include<stdio.h>

int main(){
    int vec[200] = {1,3,8,5,7,2,9,4,6};
    int tam = 9;

    for(int i= 0; i < tam - 1; i++){
        
        int min = i;
        for(int j= i + 1; j < tam; j++){
            if(vec[j] < vec[min]){
                min = j;
            }
        }

        int aux = vec[min];
        vec[min] = vec[i];
        vec[i] = aux;
    }

    for(int i = 0; i < tam; i++){
        printf("%d ", vec[i]);
    }
}
