#include<stdio.h>
int factorial(int n){
	printf("calculating f<%d>\n",n);
	printf("pushed to stack\n");
	if(n==0){
		return 1;
	}
	int f= n*factorial(n-1);
	printf("poped from stack\n");
	printf("Done with !f<%d> = %d\n",n,f);
	return f;
}
int main(void){
	printf("%d",factorial(5));
}
