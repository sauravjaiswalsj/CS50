#include<stdio.h>
int length(char *x){
	int len=0;
	while(*x!='\0'){
		len++;
		x++;
	}
	return len;
}
int main(void){
	char name[20];
	printf("Enter the Name of the person:  ");
	scanf("%[^\n]s",name);
	printf("Length of the string: %s is: %d",name,length(name));
}

