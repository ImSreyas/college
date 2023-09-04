#include<stdio.h>
void main(){
	int a;
	printf("enter a number : ");
	scanf("%d", &a);
	printf("number is %s\n", a%2 ? "odd" : "even");
}
