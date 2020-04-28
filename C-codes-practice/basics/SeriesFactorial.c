#include<stdio.h>
int main(void){
	int s=1,sum=0,n,i=1;
	printf("Enter the size of the Series: ");
	scanf("%d",&n);
	for(;i<=n;i++){
		for(int j=1;j<=i;j++){
			s*=j;
		}		
		sum+=i/s;
	}	
	printf("\nSum of Series is %d",sum);
}
