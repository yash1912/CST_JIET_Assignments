#include<stdio.h>

int rev(int n){
	int i=0,r;
	while(n>0){
		r=n%10;
		i=i*10+r;
		n=n/10;
		}
		return i;
}

void main(){
	int n,result;
	printf("Enter the number: ");
	scanf("%d",&n);
	result = rev(n);
	printf("\nThe reverse of the number is %d",result);
	if(result==n){
		printf("\nThe number is a palindrome\n");
	}
	else{
		printf("The number is not a palindrome");
	}
 }
