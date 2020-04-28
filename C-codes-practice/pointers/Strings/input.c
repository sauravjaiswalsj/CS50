#include<stdio.h>
#define Print(x) (printf("%c",x))
int main(void){
	char name[100];
	//scanf("%s",&name);Since Scanf cannot take input of multi word
	//but if we want we can use scanf("%[^\n]s",&name);
	gets(name);
	int i=0;
	size_t n =sizeof(name)/sizeof(name[0]);
	int arr[n];
	while(name[i]!='\0'){
		if(arr[i]=='\0'){
			arr[i]=name[i];
			break;
		}
		i++;
	}
	for(int i=n;i>=0;i--){
		Print(arr[i]);
	}
}
