#include<stdio.h>
#include<math.h>
float standardDeviation(int *a,int *b,int *c,int *d, int *e,int *n)
{
	float Mean=(*a+*b+*c+*d+*e)/ *n;
	float variance=(pow((Mean- *a),2)+pow((Mean- *b),2)+pow((Mean- *c),2)+pow((Mean- *d),2)+pow((Mean- *e),2))/ *n;
	float sd=sqrt(variance);
	return sd;

}
int main(void){
	int n;
	printf("Enter the number of digits:  ");
	scanf("%d",&n);
	int a,b,c,d,e;
	printf("Enter the digits");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("%f",standardDeviation(&a,&b,&c,&d,&e,&n));
}

