#include<stdio.h>

int main(){
    const int lin = 3;
    const int col = 3;

    int matrix1[3][3] =
    {  
       {1,2,3},
       {4,5,6},
       {7,8,9} 
    };

    int matrix2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };
    
    for(int i= 0; i < lin; i++){
        for(int j= 0; j < col; j++){
            printf("%d ", matrix1[i][j] * matrix2[i][j]);
        }
        printf("\n");
    }
}
