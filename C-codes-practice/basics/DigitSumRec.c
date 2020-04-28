#include<stdio.h>
int withRec(int n){
	int sum=0;
	if(n==0){
		return 0;
		}
	int rem= n%10;
	sum=sum+rem+withRec(n/10);
	return sum;
}
int main(void){
	int n;
	printf("Enter the digit:  ");
	scanf("%d",&n);
	printf("%d",withRec(n));
}
