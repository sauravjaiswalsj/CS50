#include<stdio.h>
#include<math.h>
long fib(int n){
	double x=pow(((sqrt(5)+1)/2),n);
	double y=x/sqrt(5);
	long r=(long)round(y);
	if(r%2==0){
		if(r<=4000000){
			return r;
		}
	}
	
}
int main(void){
	long n;
	//scanf("%ld",&n);
	for(int i=1;i<120;i++){
		printf("%ld \n",fib(i));
	}
}
