#include<stdio.h>
#include<stdbool.h>

int main(){
    int vec[200] = {1,3,8,5,7,2,9,4,6};
    int tam = 9;

    int start = 0;
    int end = tam - 1;
    bool swapped = true;
    
    while(swapped){
        int aux;    
        swapped = false;

        for(int i= start; i < end; i++){
            if(vec[i] > vec[i + 1]){
                aux = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = aux;

                swapped = true;
            }
        }

        if(!swapped){
            break;
        }
        swapped = false;
        end--;

        for(int i = end - 1; i >= start; i--){
            if(vec[i] > vec[i + 1]){
                aux = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = aux;
     
                swapped = true;
            }
        }
        start++;
    }

    for(int i = 0; i < 9; i++){
        printf("%d ", vec[i]);
    }
}
