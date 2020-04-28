#include<stdio.h>
#include<limits.h>
#define DBL_MAX 1.79769e+308
#define FLT_MAX 3.40282347E+38F
int main(void){
	int x=23;
	float a=2.02;
	double b=223.9038908;
	printf("double: %lf\n",DBL_MAX);
	printf("float:%e\n",FLT_MAX);
	printf("%d",INT_MIN);
}
