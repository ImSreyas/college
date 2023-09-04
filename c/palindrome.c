#include<stdio.h>
void main(){
	int n, reminder, rev=0, dup;
	printf("enter a number : ");
	scanf("%d", &n);
	dup = n;
	
	while(n>0){
		rev = rev*10 + n%10;
	}
	if(rev == n) printf("palindrome");
	else printf("not palindrom");
}
