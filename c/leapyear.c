#include<stdio.h>
void main(){
	int y;
	printf("enter the year : ");
	scanf("%d", &y);
	printf("the year %d is %s\n", y, y%4 == 0 ? "a leap year" : "not a leap year");
}
