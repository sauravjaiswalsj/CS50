#include<stdio.h>
#include<math.h>
int fact(int n){
	if(n==0 || n==1){
		return 1;
	} 
	return n*fact(n-1);
}
int sine(int n){
	int i=1;
	int sum =0;
	while(n!=0){
		sum=sum+pow(n,i)/fact(i);
		i+=2;
		n--;
	}
	return sum;
}
int main(){
	int n=5;
	printf("%d",sine(n));
	return 0;
}


