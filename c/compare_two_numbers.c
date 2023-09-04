#include<stdio.h>
void main(){
	int firstNumber, secondNumber;
	printf("enter the first number : ");
	scanf("%d", &firstNumber);
	printf("enter the second number : ");
	scanf("%d", &secondNumber);
	if(firstNumber < secondNumber){
		printf("%d is greater than %d\n", secondNumber, firstNumber);
	} else if (firstNumber > secondNumber){
		printf("%d is greater than %d\n", firstNumber, secondNumber);
	} else {
		printf("two number are equal\n");
	}
	main();
}
