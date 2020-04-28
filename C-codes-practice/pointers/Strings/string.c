#include<stdio.h>
int main(void){
	char name[]="hello";
	char str[10];
	char *ptr="GooD";
	char *q;
	str=name;
	q=ptr;
	printf("%d",*q);
	return 0;
}
