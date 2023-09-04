#include<stdio.h>
void main(){
	int a, b, c;
	printf("enter first numbers : ");
	scanf("%d", &a);
	printf("enter second numbers : ");
	scanf("%d", &b);
	printf("enter third numbers : ");
	scanf("%d", &c);
	printf("the largest number is : %d\n", (a < b ? b : a) < c ? c : (a < b ? b : a));
}
