#include<stdio.h>
void main(){
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	printf("The number is %s\n", n == 0 ? "zero" : n < 0 ? "negative" : "positive");
	main();
}
