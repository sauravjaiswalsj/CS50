#include<stdio.h>
int fib(int n){
//	printf("before fib(%d)\n",n);
	if(n<=1){
		return n;
	}
 {
	int f=fib(n-1)+fib(n-2);
	//printf("fib(%d) =%d\n",n,f);
	return f;
	}
}
int main(void){
	int c;
        scanf("%d",&c);
	printf("%d",fib(c));
}
