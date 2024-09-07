#include<stdio.h>
int main(){
	int repeat = 1;
	int isQuad = 1;
	int n,quad;

	while(repeat == 1){
		printf("digite um numero em seguida o seu quadrado");
		scanf("%d",&n);

		if(n == 0){
			repeat = 0;
			continue;
		}
		scanf("%d",&quad);

		if(n * n != quad){
			isQuad = 0;
		}
	}
	printf("%d",isQuad);
}
