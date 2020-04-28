#include<stdio.h>
int lcm(int a,int b){
	int l=a>b?a:b;
	for(l;l<=a*b;l+=l){
		if(l%a==0 && l%b==0){
			break;
		}
	}
	return l;
}
int main(void){
	int a,b;
	printf("Enter the A and B value for input:   ");
	scanf("%d%d",&a,&b);
	printf("LCM is : %d",lcm(a,b));
}


