#include<stdio.h>
void main(){
	int length, width;
	printf("enter the width of reactangle : ");
	scanf("%d", &width);
	printf("enter the length of reactangle : ");
	scanf("%d", &length);
	printf("area of circle is %d\n", length*width);
	printf("perimeter of circle is %d\n", (length+width)*2);
}
