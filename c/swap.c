#include<stdio.h>
void main(){
	int a, b, temp;
	printf("enter the first number : ");
	scanf("%d", &a);
	printf("enter the second number : ");
	scanf("%d", &b);

	printf("a is now : %d\n", a);
	printf("b is now : %d\n", b);

	temp = a;
	a = b;
	b = temp;
	
	printf("a is now : %d\n", a);
	printf("b is now : %d\n", b);
}
