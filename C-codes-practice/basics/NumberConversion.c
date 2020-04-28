/*
 * To write a robust program to convert any integer value to octal, binary and hexadecimal
 */

#include<stdio.h>

long binary(int);
long octal(int);
long hexadecimal(int);
int main(void){
	int n,ch,t=1;;
	do{
	printf("Enter choice\n1.Conversion\n2.Exit\n");
        scanf("%d",&ch);
	printf("-------------------------------------------------------------------------------\n");
	switch(ch){
		case 1:
			printf("Enter the Number to Find its Equivalent Conversion:  ");
		        scanf("%d",&n);
			printf("Its Binary is: %ld\n",binary(n));
			printf("Its octal is: %ld\n",octal(n));
			printf("Its Hexadecimal is: %ld\n",hexadecimal(n));
			break;
		case 2:
			printf("bye\n");
			t=0;
			break;
		default:
			printf("ReEnter\n");
		
	}
	}while(t);
}
// Conversion Done below

long binary(int n){
	int temp=n,i=1;
	long sum=0;
	while(temp!=0){
		long rem=temp%2;
		temp/=2;
		sum=sum+(rem*i);
		i*=10;
	}
	return sum;
}

long octal(int n){
	long sum=0;
	int i=1;
	while(n!=0){
		long rem=n%8;
		n/=8;
		sum=sum+(rem*i);
		i*=10;
	}
	return sum;
}
long hexadecimal(int n){
	long sum=0;
	int i=1;
	while(n!=0){
		long rem=n%16;
		n/=16;
		sum=sum+(rem*i);
		i*=10;
	}
	return sum;
}
		
