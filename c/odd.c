#include <stdio.h>
void main(){
	int n;
	printf("enter a number : ");
	scanf("%d", &n);
	for(int i=1; i<=n; i+=2) printf("%d\n", i);
}
