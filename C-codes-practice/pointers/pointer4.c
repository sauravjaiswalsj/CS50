#include<stdio.h>
int main(void){
	int a=1025;
	int *p=&a;
	int **k=&p;
	printf("Address of %p\n",*k);
	printf("value at : %d\n",**k);
	char *d=(char*)k;
	printf("Address of %p\n",d);
	printf("Value of %d\n",*d);
	void *p0;
	p0=p;
	printf("%p",p0);
}
