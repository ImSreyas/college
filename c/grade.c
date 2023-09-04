#include <stdio.h>
void main(){
	int a, b, c, avg;
	printf("enter the mark of the first subject : ");
	scanf("%d", &a);
	printf("enter the mark of the second subject : ");
	scanf("%d", &b);
	printf("enter the mark of the third subject : ");
	scanf("%d", &c);

	avg= (a+b+c)/3;
	switch(avg/10){
		case 10: printf("grade is A\n"); 
		break;
		case 9: printf("grade is A\n"); 
		break;
		case 8: printf("grade is B\n"); 
		break;
		case 7: printf("grade is C\n"); 
		break;
		case 6: printf("grade is D\n"); 
		break;
		case 5: printf("grade is E. you have failed in the exam.\n"); 
		break;
	}
}
