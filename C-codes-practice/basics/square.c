#include<stdio.h>
int main(void){
	int a,b,sum=1;
	printf("Enter the number A and B: ");
	scanf("%d%d",&a,&b);
	while(b!=0){
		sum*=a;
		b--;
	}
	printf("%d\n",sum);
}
