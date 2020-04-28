#include<stdio.h>
#include<stdbool.h>
bool primeChecker(int);
int main(void){
	printf("Prime Number between the number\n");
	printf("Enter the number to check the prime number between each other:  ");
	int a,b,count=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		if(primeChecker(i)){
			count++;
			printf("Prime Numbers for %d : %d \n",count,i);
		}
	}
}
bool primeChecker(int n){
	int count=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		return true;
	}
	return false;
}
