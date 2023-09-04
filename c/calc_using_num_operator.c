#include <stdio.h>
void main(){
	int a, b, op;
	printf("\nenter the first number : ");
	scanf("%d", &a);
	printf("enter the second number : ");
	scanf("%d", &b);
	printf("enter the operator number \n1)add \n2)sub \n3)multiplication \n4)division : ");
	scanf("%d", &op);

	switch(op){
		case 1 : printf("sum of two number is : %d\n", a+b);
			 break;
		case 2 : printf("diff between two number is : %d\n", a-b);
			 break;
		case 3 : printf("product of two number is : %d\n", a*b);
			 break;
		case 4 : printf("%d / %d is  : %d\n",a, b, a/b);
			 break;
		default : printf("unknown operand");
	}
	main();
}
