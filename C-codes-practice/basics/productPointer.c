#include<stdio.h>
int prod(int* ,float*);
int main(void){
	int a=3,c;
	float b=5.3;
	c=prod(&a,&b);
	printf("Product is %d",c);
}
int prod(int *a,float *b){
	return (*a)* *b;
}
