#include <stdio.h>
void main(){
	int n;
	printf("enter a number : ");
	scanf("%d", &n);

	for(int i=n; i>=0; i--){
		printf("%d\n", i);
	}
}
