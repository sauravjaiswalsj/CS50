#include<stdio.h>
void swap(int x, int y){
	x=x+y;
	y=x-y;
	x=x-y;
	printf("X :%d Y: %d\n",x,y);
}
int main(void){
	int a=10;
	int b=19;
	swap(a,b);
	printf("A:%d B:%d\n",a,b);
}
