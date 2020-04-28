#include<stdio.h>
int main(void){
	int n;
	printf("Enter the digit:  ");
	scanf("%d",&n);
	/*
		4- 0100
		1- 0001
		----------
		   0000
		-----------
	*/
	if(n & 1){
		printf("Odd\n");
	}
	else{
		printf("Even");
	}
}
