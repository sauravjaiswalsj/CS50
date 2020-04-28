#include<stdio.h>
#include<math.h>
int main(void){
	int n;
	float x,sum=0.0;
	printf("Enter the value of x: ");
	scanf("%f",&x);
	printf("\nEnter the Number of Series for which sum has to be calculated:  ");
	scanf("%d",&n);
	float y=(x-1)/x;
	sum=y+sum;

	for(float i=2.0;i<=n;i++){
		sum+=0.5*(pow(y,i));
	}
	printf("Sum is %f~",sum);
}
