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
	if(90 <= avg && avg<=100){
		printf("the grade of the subject is A\n");
	} else if (80 <= avg && avg<90){
		printf("the grade of the subject is B\n");
	} else if (80 <= avg && avg<90){
		printf("the grade of the subject is C\n");
	} else if (70 <= avg && avg<80){
		printf("the grade of the subject is D\n");
	} else if (60 <= avg && avg<70){
		printf("the grade of the subject is E\n");
	} else if (50 <= avg && avg<90){
		printf("the grade of the subject is F. and you have failed in the subject\n");
	} else {
		printf("mark of the subject is out of bound.\n");
	}
}
