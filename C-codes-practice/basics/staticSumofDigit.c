#include<stdio.h>
int sum_digit(int num){
	static int sum;
	int a=num%10;
	num/=10;
	sum+=a;
	if(num!=0){
		sum_digit(num);
	}
	else{
		return sum;
	}
}
int main(){
	int n=12345;
	printf("%d",sum_digit(n));
}
