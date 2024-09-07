#include<stdio.h>

int main(){
	int n;
	int isTriangle = 0;

	printf("digite um numero inteiro positivo \n");
	scanf("%d",&n);

		for(int i = 1; i * (i+1) * (i+2) <= n; i++){
		if(i * (i + 1) * (i + 2) == n){
			isTriangle = 1;
			break;
		}
	}
	printf("%d\n",isTriangle);
}
