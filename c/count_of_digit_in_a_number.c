#include <stdio.h>
void main(){
	int n, count=0;
	printf("enter the number : ");
	scanf("%d", &n);

	while(n!=0){
		count ++;
		n/=10;
	}
	printf("count is : %d\n", count);
}
