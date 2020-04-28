#include<stdio.h>
int hcf(int a,int b){
	int max=a>b?a:b;
	int min=a<b?a:b;
	int h,rem=max%min;
	while(rem!=0){
		rem=max%min;
		if(rem==0){
			h=min;
			break;
		}
		max=min;
		min=rem;
	}
	return h;
}
int main(void){
	int a,b;
	printf("Enter the two number:  ");
	scanf("%d%d",&a,&b);
	printf("HCF is:  %d",hcf(a,b));
	int j=hcf(a,b);
	printf("\nLCm is :%d",(a*b)/j);
}
