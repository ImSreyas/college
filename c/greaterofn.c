#include <stdio.h>
void main(){
	int limit;
	int largest=0;
	printf("enter the limit : ");
	scanf("%d", &limit);
	int arr[limit];
	for(int i=0; i<limit; i++){
		printf("enter number %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<limit; i++){
		if(largest<arr[i]){
			largest = arr[i];
		}
	}
	printf("largest number is : %d\n", largest);
}
