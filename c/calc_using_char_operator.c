#include <stdio.h>
void main(){
	int a, b;
	char op;
	printf("enter the operator number \n+)add \n-)sub \n*)multiplication \n/)division \n--------- : ");
	scanf("%c", &op);
	printf("\nenter the first number : ");
	scanf("%d", &a);
	printf("enter the second number : ");
	scanf("%d", &b);

	switch(op){
		case('+') : printf("sum of two number is : %d\n", a+b);
			 break;
		case('-') : printf("diff between two number is : %d\n", a-b);
			 break;
		case('*') : printf("product of two number is : %d\n", a*b);
			 break;
		case('/') : printf("%d / %d is  : %d\n",a, b, a/b);
			 break;
		default : printf("unknown operand");
	}
}
