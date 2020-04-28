#include<stdio.h>
int main(){
	char d;
	scanf("%c",&d);
	if((int)d>=65 && (int)d<91){
		printf("capital");
	}else if((int)d>=97 && (int)d<=122){
		printf("Small");
	}
	else if((int)d>=48 && (int)d<58){
		printf("Digits");
	}else if(((int)d>=0 && (int)d<=47) ||((int)d>=58&&(int)d<=64) ||((int)d>=91 &&(int)d<=96)||((int)d>=123 && (int)d<=127)){
		printf("Special Digit");
	}
	else{
		printf("Not in scope");
	}
	return 0;
}

