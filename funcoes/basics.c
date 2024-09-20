#include<stdio.h>
#include<math.h>

float pow_a(int b){
    float a;
    printf("digite o valor de 'a'");
    scanf("%g", &a);
    a = pow(a,b);
    
    return a;
}

int main(){
    int b;
    printf("a quando deseja elevar?: ");
    scanf("%d",&b);
    pow_a(b);
}
