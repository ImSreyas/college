#include <stdio.h>
void main(){
	int n, sum=0;
	printf("enter the number : ");
	scanf("%d", &n);

	while(n!=0){
		sum = sum + n%10;
		n/=10;
	}
	printf("sum is : %d\n", sum);
}
