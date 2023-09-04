#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
void main(){
 	for(int i=10; i>=0; i--){
		system("clear");
		printf("%d\n", i); 
		sleep(1);
	}
}
