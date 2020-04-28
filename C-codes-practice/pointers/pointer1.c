#include<stdio.h>

int main(void){
	int *j,i;
	for(i=0;i<10;i++){
		j=&i;
		printf("Address of i %p",j);
		printf("\tValue of i %d\t",*j);
		printf("Adress of i %p\n",&i);
		
	}
}
