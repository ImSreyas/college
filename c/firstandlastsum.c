#include <stdio.h> 
#include <stdbool.h>
void main(){
	int a, val, sum=0;
	bool flag = false;
	printf("enter a number");
	scanf("%c", &a);
	
	while(a<10){
		val = a%10;
		if(!flag){
			sum = val;
			flag = true;
		}
	}
	sum = sum + a;
}
