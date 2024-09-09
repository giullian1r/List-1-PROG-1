#include<stdio.h>

int main(){
    const int lin = 3;
    const int col = 2;
    int matrix[lin][col];
    
    for(int i= 0; i < lin; i++){
        for(int j= 0; j < col; j++){
            printf("digite um numero:\n");
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nmatriz padrao: \n");
    for(int i= 0; i < lin; i++){
         for(int j= 0; j < col; j++){
            printf("%d ", matrix[i][j]);
         }
         printf("\n");
    }

    printf("\nmatriz transposta: \n");
    for(int j = 0; j < col; j++){
        for(int i = 0; i < lin; i++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
