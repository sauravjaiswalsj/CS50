#include<stdio.h>
int add(int n){	
	if(n<=0){
		return 0;
	}
	return n+add(n-1);
}
int main(void){
	int n=25;
	printf("%d",add(n));
}
