#include<stdio.h>
int main(void){
	int a=5,b=8,c=10;
	a=a+b+c;
	b=a-(b+c);
	c=a-(b+c);
	a=a-(b+c);
	printf("A=%d  B=%d  C=%d",a,b,c);
}
