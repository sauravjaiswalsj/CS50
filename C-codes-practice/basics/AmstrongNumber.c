/*
 *Amstrong 
 	153--- (1*1*1+5*5*5+3*3*3)
 *
 * */
#include<stdio.h>
#include<stdbool.h>
bool amstrongChecker(int);
int main(void){
	int i=1;
	while(i<=500){
		bool value=amstrongChecker(i);
		if(value==true){
			printf("Amstrong Number is: %d\n",i);
		}
		i++;
	}
}
bool amstrongChecker(int n){
	int temp=n;
	int t,s,sum=0;
	while(temp!=0){
		int t=temp%10;
		s=t*t*t;
		sum+=s;
		temp/=10;
	}
	if(sum==n)
		return true;
	return false;
}

