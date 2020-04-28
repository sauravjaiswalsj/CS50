#include<stdio.h>
int powe(int,int);
int main(void){
	int a,b;
	printf("Enter the A and B whose power has to be found");
	scanf("%d%d",&a,&b);
	int power=powe(a,b);
	
	printf("Power is %d",power);
}
int powe(int a,int b){
	if(b!=0){
		return a* powe(a,(b-1));
	}
	else{return 1;}
}
