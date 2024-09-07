#include<stdio.h>
#include<stdbool.h>

int main(){

	bool repeat = true;
	int sum = 0;
	int count = 0;
       	int prev = 0;
	int num;

	printf("digite : \n");
	while(repeat){
		scanf("%d",&num);

		sum += num;
		count++;

		if((prev == num / 2) || (prev == num * 2)){
			repeat = false;
			continue;
		}	
		prev = num;
	}
	printf("%d %d %d %d", count,sum,prev,num);
}
