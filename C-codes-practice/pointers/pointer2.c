#include<stdio.h>
int main(void){
	int i=3;
	int *j=&i;
	int **k=&j;
	printf("&i : %p\n",&i);
	printf("Address of i: %p\n",j);
 	printf("Value of i: %d\n",*j);
	printf("Adress of i: %d\n",**k);

}

