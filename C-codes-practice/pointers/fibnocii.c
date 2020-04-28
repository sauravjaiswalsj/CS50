#include<stdio.h>
int fib(int n){
	int a=0,b=1,sum=0;
	for(int i=1;i<=n;i++){
		sum=a+b;
		a=b;
		b=sum;
	}
	return sum;
}
int main(void){
	int c;
	scanf("%d",&c);
	printf("%d",fib(c));
}
