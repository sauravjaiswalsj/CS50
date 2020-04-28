#include<stdio.h>
void copy(char *t,const char *nam){
	while(*nam!='\0'){
		*t=*nam;
		nam++;
		t++;
	}
	*t='\0';
}
int main(){
	char name[20];
	char target[20];
	printf("Enter the name of the person:  ");
	scanf("%[^\n]s",name);
	copy(target,name);
	printf("Fucking %s\n",target);
	return 0;
}
