#include<stdio.h>
void main(){
	int a, b;
	printf("enter the first number : ");
	scanf("%d", &a);
	printf("enter the second number : ");
	scanf("%d", &b);

	printf("a is now : %d\n", a);
	printf("b is now : %d\n", b);

	a = b + a;
	b = a - b;
	a = a - b;
	
	printf("a is now : %d\n", a);
	printf("b is now : %d\n", b);
}
