#include<stdio.h>
int main(void){
	int i=0;
	printf("The Ascii values of each are in the tables\n");
	printf("--------------------------\n");
	while(i<=255){
		printf("|\t");
		printf("%d \t %c| \n",i,(char)i);
		printf("|");
		i++;
	}
}
