#include<stdio.h>
#include<stdbool.h>
void main(){
	int n;
	bool flag=false;
	printf("enter the number : ");
	scanf("%d", &n);
	
	if(n<2){
		printf("number is not prime.");
	} else {
		for(int i=2; i<=n/2; i++){
			if(n%i == 0){
				printf("number is not prime\n");
				flag = true;
				break;
			} 
		}
		if(!flag){
			printf("number is a prime number\n");
		}
	}
}
