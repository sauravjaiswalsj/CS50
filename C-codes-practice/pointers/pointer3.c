#include<stdio.h>
int main(void){
	int a=10;
	int* p=&a;
	printf("%p\n",p);
	printf("%p\n",p+1); // Increments the address by 4 as sinze of int is 4
}
