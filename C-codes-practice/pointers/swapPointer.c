#include<stdio.h>
void swap(int *x,int *y){
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	//printf("X:%d Y:%d \n",*x,*y);
}
int main(void){
	int a=10,b=20;
	printf("Before A:%d B:%d\n",a,b);
	swap(&a,&b);
	printf("After A:%d B:%d",a,b);
}
