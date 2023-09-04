#include<stdio.h>
void main(){
	int largest, smallest, limit, n;
	printf("enter the limit : ");
	scanf("%d", &limit);
	for(int i=0;i<limit;i++){
		printf("enter the number : ");
		scanf("%d", &n);
		if(i==0){
			largest=n;
			smallest=n;
		}
		if(n>largest){
			largest=n;
		} 
		if(n<smallest) {
			smallest=n;
		}
	}
	printf("smallest is %d and largest is %d\n", smallest, largest);
}
